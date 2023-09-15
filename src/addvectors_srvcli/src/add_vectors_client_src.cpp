#include "rclcpp/rclcpp.hpp"
#include "addvectors_srvcli/srv/add_vectors_srv.hpp"                                        // CHANGE

#include <chrono>
#include <cstdlib>
#include <memory>
#include <vector>

using namespace std::chrono_literals;

int main(int argc, char **argv)
{
    std::vector<float> f1={1.0,2.0,3.0};
    std::vector<float> f2={4.0,5.0,6.0};
    rclcpp::init(argc, argv);


  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Adding vectors:");
  for(int i=0;i<3;i++)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "%f", f1[i]);
  }
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "\n");
  for(int i=0;i<3;i++)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "%f", f2[i]);
  }
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "\n");
  

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("add_vectors_client");  // CHANGE
  rclcpp::Client<addvectors_srvcli::srv::AddVectorsSrv>::SharedPtr client =                // CHANGE
    node->create_client<addvectors_srvcli::srv::AddVectorsSrv>("add_vectors");          // CHANGE

  auto request = std::make_shared<addvectors_srvcli::srv::AddVectorsSrv::Request>();       // CHANGE
  request->v1 = f1;
  request->v2 = f2;                                                            // CHANGE

  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto result = client->async_send_request(request);

   
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
  rclcpp::FutureReturnCode::SUCCESS)
{
  std::vector<float> ans=result.get()->sum; 
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sum:");
  for (int i = 0; i < 3; i++)
  {
    //RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Done");
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "%f", ans[i]);
    //                                          
  }
} else {
  RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service add_vectors");
}

  rclcpp::shutdown();
  return 0;
}
