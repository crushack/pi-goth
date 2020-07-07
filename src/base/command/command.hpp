#ifndef PIGOTH_BASE_COMMAND
#define PIGOTH_BASE_COMMAND

#include <iostream>

namespace goth {
namespace base {
namespace command {

// Defines a generic command that can be extended to define custom actions.
class Command {
public:
  virtual ~Command() {}
  virtual void execute() = 0;
};

class JumpCommand : public Command {
public:
  void execute() {
    std::cout << "Jump!" << std::endl;
  }
};

} // command
} // base
} // goth

#endif
