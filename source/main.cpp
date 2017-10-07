#include <nds.h>
#include <iostream>

// noexcept is a C++11 keyword
std::string say_hello() noexcept
{
  return "Hello NDS";
}

int main()
{
  //consoleDemoInit is obligatory
  consoleDemoInit();

  std::cout << say_hello() << '\n';

  //Infinite waiting
  while (1) {}
}
