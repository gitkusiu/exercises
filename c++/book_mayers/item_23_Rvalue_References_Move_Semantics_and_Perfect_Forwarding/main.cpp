#include <iostream>
#include <chrono>
#include "Widget.hpp"




void makeLogEntry(const char* message,
                  const std::chrono::time_point<std::chrono::system_clock> t) {}

void process(Widget& lvalArg) {
  std::cout << "process(Widget&)" << std::endl;
}

void process(Widget&& rvalArg) {
  std::cout << "process(Widget&&)" << std::endl;
}

template<typename T>                      // template that passes
void logAndProcess(T&& param)             // param to process
{
  auto now =
    std::chrono::system_clock::now();     // get current time

  makeLogEntry("Calling 'process'", now);
  process(std::forward<T>(param));
}

int main()
{
  Widget w;
  logAndProcess(w);                // call with lvalue
  logAndProcess(std::move(w));     // call with rvalue
}



