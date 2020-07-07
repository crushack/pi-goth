#include <base/command/command.hpp>
#include <iostream>
#include <memory>

int main() 
{
  std::shared_ptr<goth::base::command::Command> command = std::make_shared<goth::base::command::JumpCommand>();
  command->execute();
  return 0;
}
