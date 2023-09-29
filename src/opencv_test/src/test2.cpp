// header for ROS core functionalities
#include "rclcpp/rclcpp.hpp"

// including image message type to be able to receive and publish it
#include "sensor_msgs/msg/image.hpp"

// headers regarding the connection between opencv and ROS
#include <image_transport/image_transport.hpp>
#include "cv_bridge/cv_bridge.h"

// OpenCV core functions and various image processing algorithms
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using std::placeholders::_1;

// Defining a class that will be utilize in the "main" function
class ImageSubscriber : public rclcpp::Node
{

	// Declaring pointer to the publisher and subscriber the publish and receive images.
	rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr publisher_;
	rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr subscription_;

  public:
	// Constructor of the class. The class is derived from the parent class "Node" of rclcpp and
	// the node is called "image_processor", and each time it receive a data, it will call the callbackImage() function
    	ImageSubscriber() : Node("image_processor")
	{
		// Defining the subscriber: it will receive "Image" type data from the topic /camera1/image_raw 
      		subscription_ = this->create_subscription<sensor_msgs::msg::Image>("/camera1/image_raw", 10, std::bind(&ImageSubscriber::callbackImage, this, _1));
		    //subscription_ = this->create_subscription<sensor_msgs::msg::Image>("/camera1/image_raw", 10, std::bind(&ImageSubscriber::canny_callback, this, _1));
		    //subscription_ = this->create_subscription<sensor_msgs::msg::Image>("/camera1/image_raw", 10, std::bind(&ImageSubscriber::hough_callback, this, _1));
		    //subscription_ = this->create_subscription<sensor_msgs::msg::Image>("/camera1/image_raw", 10, std::bind(&ImageSubscriber::harris_callback, this, _1));

	//defining the publisher: it will publish "Image" type data to the "output_image" topic
            publisher_ = this->create_publisher<sensor_msgs::msg::Image>("output_image", 10);
    }

  private:

	// callback function which will be triggered each time the subscriber_ receives new data.
	// The data it receives is of Image type.
	// void callbackImage(const sensor_msgs::msg::Image::SharedPtr msg) const
	// {    
	// 	// converting the ROS message type data to opencv type
	// 	cv_bridge::CvImagePtr cv_ptr;
	// 	cv_ptr = cv_bridge::toCvCopy(msg,"bgr8" );
		
	// 	// creating an opencv image that has 1 channel (gray scale as opposed to color bgr8 image type above.)
	// 	cv::Mat dst =cv:: Mat::zeros( cv_ptr->image.size(), CV_32FC1);

	// 	// converting colorimage to the gray scale image using the cvtcolor function
	// 	cv::cvtColor(cv_ptr->image, dst, cv::COLOR_BGR2GRAY);
		
	// 	// converting the gray scale image to ros message data type (mono8) 
	// 	sensor_msgs::msg::Image::SharedPtr msg_to_send = cv_bridge::CvImage(std_msgs::msg::Header(), "mono8", dst).toImageMsg();

	// 	// publishing the image
    //  		publisher_->publish(*msg_to_send);

    // }

	void callbackImage(const sensor_msgs::msg::Image::SharedPtr msg) const
	{    
		// converting the ROS message type data to opencv type
		cv_bridge::CvImagePtr cv_ptr;
		cv_ptr = cv_bridge::toCvCopy(msg, "bgr8");

		// Convert the image to HSV color space
		cv::Mat hsv;
		cv::cvtColor(cv_ptr->image, hsv, cv::COLOR_BGR2HSV);

		// Define color thresholds for red, green, blue, and purple/pink
		cv::Scalar lower_red(0, 100, 100);       // Lower HSV range for red
		cv::Scalar upper_red(10, 255, 255);     // Upper HSV range for red

		cv::Scalar lower_green(40, 40, 40);     // Lower HSV range for green
		cv::Scalar upper_green(80, 255, 255);   // Upper HSV range for green

		cv::Scalar lower_blue(100, 40, 40);    // Lower HSV range for blue
		cv::Scalar upper_blue(140, 255, 255);  // Upper HSV range for blue

		cv::Scalar lower_purple(140, 40, 40);  // Lower HSV range for purple/pink
		cv::Scalar upper_purple(160, 255, 255);// Upper HSV range for purple/pink

		// Create masks for each color
		cv::Mat mask_red, mask_green, mask_blue, mask_purple;
		cv::inRange(hsv, lower_red, upper_red, mask_red);
		cv::inRange(hsv, lower_green, upper_green, mask_green);
		cv::inRange(hsv, lower_blue, upper_blue, mask_blue);
		cv::inRange(hsv, lower_purple, upper_purple, mask_purple);

		// Find contours for each color region
		std::vector<std::vector<cv::Point>> contours_red, contours_green, contours_blue, contours_purple;
		cv::findContours(mask_red, contours_red, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
		cv::findContours(mask_green, contours_green, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
		cv::findContours(mask_blue, contours_blue, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);
		cv::findContours(mask_purple, contours_purple, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

		// Calculate average coordinates for each color
		cv::Point2f average_red(0, 0), average_green(0, 0), average_blue(0, 0), average_purple(0, 0);
		int num_red=0;
		int num_green=0;
		int num_blue=0;
		int num_purple=0;
		for (const auto &contour : contours_red) {
			for (const auto &point : contour) {
				average_red.x += point.x; // Accumulate x-coordinate
				average_red.y += point.y; // Accumulate y-coordinate
				num_red++;
			}
		}
		for (const auto &contour : contours_green) {
			for (const auto &point : contour) {
				average_green.x += point.x;
				average_green.y += point.y;
				num_green++;
			}
		}
		for (const auto &contour : contours_blue) {
			for (const auto &point : contour) {
				average_blue.x += point.x;
				average_blue.y += point.y;
				num_blue++;
			}
		}
		for (const auto &contour : contours_purple) {
			for (const auto &point : contour) {
				average_purple.x += point.x;
				average_purple.y += point.y;
				num_purple++;
			}
		}

		//int num_red = contours_red.size();
		// int num_red=cv::countNonZero(mask_red);
		// //RCLCPP_INFO(this->get_logger(), "Red Pixels: %d", num_red);
		// int num_green=cv::countNonZero(mask_green);
		// int num_blue=cv::countNonZero(mask_blue);
		// int num_purple=cv::countNonZero(mask_purple);

		if (num_red > 0) {
			average_red.x /= num_red; // Calculate average x-coordinate
			average_red.y /= num_red; // Calculate average y-coordinate
			RCLCPP_INFO(this->get_logger(), "Average Red: (%f, %f)", average_red.x, average_red.y);

		}
		if (num_green > 0) {
			average_green.x /= num_green;
			average_green.y /= num_green;
			RCLCPP_INFO(this->get_logger(), "Average Green: (%f, %f)", average_green.x, average_green.y);

		}
		if (num_blue > 0) {
			average_blue.x /= num_blue;
			average_blue.y /= num_blue;
			RCLCPP_INFO(this->get_logger(), "Average Blue: (%f, %f)", average_blue.x, average_blue.y);

		}
		if (num_purple > 0) {
			average_purple.x /= num_purple;
			average_purple.y /= num_purple;
			RCLCPP_INFO(this->get_logger(), "Average Purple: (%f, %f)", average_purple.x, average_purple.y);

		}
		cv::Mat combined_mask = cv::Mat::zeros(mask_red.size(), CV_8UC1); // Initialize an all-zero mask

		// Add each mask to the combined_mask
		cv::add(mask_red, combined_mask, combined_mask);
		cv::add(mask_green, combined_mask, combined_mask);
		cv::add(mask_blue, combined_mask, combined_mask);
		cv::add(mask_purple, combined_mask, combined_mask);

		// converting the gray scale image to ros message data type (mono8) 
		//sensor_msgs::msg::Image::SharedPtr msg_to_send = cv_bridge::CvImage(std_msgs::msg::Header(), "mono8", mask_red).toImageMsg();
		//sensor_msgs::msg::Image::SharedPtr msg_to_send = cv_bridge::CvImage(std_msgs::msg::Header(), "mono8", mask_green).toImageMsg();
		//sensor_msgs::msg::Image::SharedPtr msg_to_send = cv_bridge::CvImage(std_msgs::msg::Header(), "mono8", mask_blue).toImageMsg();
		sensor_msgs::msg::Image::SharedPtr msg_to_send = cv_bridge::CvImage(std_msgs::msg::Header(), "mono8", mask_purple).toImageMsg();
		// sensor_msgs::msg::Image::SharedPtr msg_to_send = cv_bridge::CvImage(std_msgs::msg::Header(), "mono8", combined_mask).toImageMsg();

		// publishing the image
     		publisher_->publish(*msg_to_send);

    }

	void canny_callback(const sensor_msgs::msg::Image::SharedPtr msg) const
	{    
		// Convert the ROS message type data to OpenCV type
		cv_bridge::CvImagePtr cv_ptr;
		cv_ptr = cv_bridge::toCvCopy(msg, "bgr8");

		// Create an OpenCV image that has 1 channel (grayscale)
		cv::Mat dst = cv::Mat::zeros(cv_ptr->image.size(), CV_8UC1);

		// Convert the color image to grayscale
		cv::cvtColor(cv_ptr->image, dst, cv::COLOR_BGR2GRAY);

		// Apply Canny edge detection
		cv::Mat edge_image;
		cv::Canny(dst, edge_image, 50, 150);
		
		// converting the gray scale image to ros message data type (mono8) 
		sensor_msgs::msg::Image::SharedPtr msg_to_send = cv_bridge::CvImage(std_msgs::msg::Header(), "mono8", edge_image).toImageMsg();

		// publishing the image
     		publisher_->publish(*msg_to_send);

    }
	void harris_callback(const sensor_msgs::msg::Image::SharedPtr msg) const
	{    
		cv_bridge::CvImagePtr cv_ptr;
		cv_ptr = cv_bridge::toCvCopy(msg, "bgr8");

		// Create an OpenCV image that has 1 channel (grayscale)
		cv::Mat gray_image = cv::Mat::zeros(cv_ptr->image.size(), CV_8UC1);

		// Convert the color image to grayscale
		cv::cvtColor(cv_ptr->image, gray_image, cv::COLOR_BGR2GRAY);

		// Apply Harris corner detection
		cv::Mat corner_image;
		cv::cornerHarris(gray_image, corner_image, 4, 3, 0.06); // You can adjust the parameters

		// Normalize the corner response to [0, 255] range for visualization
		cv::normalize(corner_image, corner_image, 0, 255, cv::NORM_MINMAX, CV_8UC1);

		// Mark the corners with a marker color (e.g., red)
		cv::Mat marked_image = cv_ptr->image.clone();
		marked_image.setTo(cv::Scalar(255, 255, 255), corner_image > 200); // You can adjust the threshold as needed

		//Make the corner marking more visible by dimming the rest of the image
		for (int y = 0; y < marked_image.rows; ++y) {
    		for (int x = 0; x < marked_image.cols; ++x) {
        		cv::Vec3b& pixel = marked_image.at<cv::Vec3b>(y, x);
				if(pixel[0]<250 && pixel[1]<250 && pixel[2]<250)
				{
					pixel[0]=(int)pixel[0]/4;
					pixel[1]=(int)pixel[1]/4;
					pixel[2]=(int)pixel[2]/4;
				}
			}
		}
		
		// converting the gray scale image to ros message data type (mono8) 
		sensor_msgs::msg::Image::SharedPtr msg_to_send = cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", marked_image).toImageMsg();

		// publishing the image
     		publisher_->publish(*msg_to_send);
    }

	void hough_callback(const sensor_msgs::msg::Image::SharedPtr msg) const
	{    
		// Convert the ROS message type data to OpenCV type
		cv_bridge::CvImagePtr cv_ptr;
		cv_ptr = cv_bridge::toCvCopy(msg, "bgr8");

		// Create a grayscale version of the image
		cv::Mat gray_image;
		cv::cvtColor(cv_ptr->image, gray_image, cv::COLOR_BGR2GRAY);

		// Perform Hough circle detection
		std::vector<cv::Vec3f> circles;
		double dp = 1.0;      // Inverse ratio of the accumulator resolution to the image resolution.
		double minDist = 30;  // Minimum distance between circle centers.
		double param1 = 150;   // Upper threshold for the internal Canny edge detector.
		double param2 = 30;   // Threshold for center detection.
		int minRadius = 1;   // Minimum circle radius.
		int maxRadius = 50;  // Maximum circle radius.

		cv::HoughCircles(
			gray_image, circles, cv::HOUGH_GRADIENT, dp, minDist, param1, param2, minRadius, maxRadius);

		// Draw circles and mark their centers
		cv::Mat marked_image = cv_ptr->image.clone();
		int i=0;
		for (const auto& circle : circles) {
			cv::Point center(cvRound(circle[0]), cvRound(circle[1]));
			int radius = cvRound(circle[2]);
        	RCLCPP_INFO(get_logger(), "Detected Circle %d: Center = (%d, %d), Radius = %d", i + 1, center.x, center.y, radius);
			//RCLCPP_INFO(get_logger(), "Average of pixels Center = %d, %d", center.x, center.y);

			// Draw the circle
			cv::circle(marked_image, center, radius, cv::Scalar(255, 255, 255), 2);  

			// Mark the center
			cv::circle(marked_image, center, 3, cv::Scalar(255, 255, 255), -1);  
			i++;
		}
		i=0;
		// Convert the marked image to a ROS image message with color encoding
		sensor_msgs::msg::Image::SharedPtr msg_to_send = cv_bridge::CvImage(std_msgs::msg::Header(), "bgr8", marked_image).toImageMsg();

		// publishing the image
     	publisher_->publish(*msg_to_send);

    }
    
};

int main(int argc, char * argv[])
{

	//initialize ROS
	rclcpp::init(argc, argv);

	//create the 
	rclcpp::spin(std::make_shared<ImageSubscriber>());
	rclcpp::shutdown();
  return 0;
}
