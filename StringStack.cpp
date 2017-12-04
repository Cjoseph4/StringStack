#include "StringStack.h"
#include <vector>
#include <string>

std::string StringStack::pop() {
  if (stack[0] != "") {
    std::string i = stack[stack.size()];
    stack.pop_back();
    return i;
  }
  return "";
}

void StringStack::push(std::string input) {
  stack.push_back(input);
}

bool StringStack::isEmpty() {
  if (stack[0] != "") {
    return false;
  }
  return true;
}
