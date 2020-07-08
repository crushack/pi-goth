#include <base/command/command.hpp>

#include <gflags/gflags.h>
#include <glog/logging.h>

#include <iostream>
#include <memory>

int main(int argc, char* argv[]) 
{
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  std::shared_ptr<goth::base::command::Command> command =
      std::make_shared<goth::base::command::JumpCommand>();
  command->execute();
  LOG(INFO) << "Logging working!";
  return 0;
}
