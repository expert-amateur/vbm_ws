#include "rclcpp/rclcpp.hpp"
#include "addvectors_srvcli/srv/add_vectors_srv.hpp"                                      

#include <memory>
#include <vector>

void add(const std::shared_ptr<addvectors_srvcli::srv::AddVectorsSrv::Request> request,     // CHANGE
          std::shared_ptr<addvectors_srvcli::srv::AddVectorsSrv::Response> response)  // CHANGE
{
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request:\n");
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "v1");
    for(int i=0;i<3;i++)
    {
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "%f ", request->v1[i]);
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "v2");
    for(int i=0;i<3;i++)
    {
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "%f ", request->v2[i]);
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Sum:");
    std::vector<float> ans={};
    for(int i=0; i<3; i++)
    {
      float temp=request->v1[i]+request->v2[i];
      ans.push_back(temp);
      RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "%f",temp);

    }
    //std::vector<float> ans={8.0,9.0,10.0};
    response->sum=ans;
    ans={};
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("add_vectors_server");   // CHANGE

  rclcpp::Service<addvectors_srvcli::srv::AddVectorsSrv>::SharedPtr service =               // CHANGE
    node->create_service<addvectors_srvcli::srv::AddVectorsSrv>("add_vectors",  &add);   // CHANGE

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add 2 vectors.");                     // CHANGE

  rclcpp::spin(node);
  rclcpp::shutdown();
}
