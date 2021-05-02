#pragma once

#include <string>

class Widget {
public:

  Widget();
  Widget(Widget&& rhs);

private:
//   static std::size_t moveCtorCalls;
  std::string s;
};