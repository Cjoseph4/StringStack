#ifndef _STRINGSTACK_
#define _STRINGSTACK_
#include "TrueStack.h"
#include <string>
#include <vector>

class StringStack : public TrueStack
{
public:
  std::string pop();
  void push(std::string);
  bool isEmpty();
private:
  std::vector<std::string> stack;
};

#endif
