#include "Widget.hpp"

std::size_t moveCtorCalls{0};

Widget::Widget()
  : s("")
  {}

Widget::Widget(Widget&& rhs)
  : s(std::move(rhs.s))
  { ++moveCtorCalls; }