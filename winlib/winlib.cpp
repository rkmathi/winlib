#include "pch.h"

#include <iostream>

#include "static_lib.h"

int main(int argc, char** argv) {
  std::cout << __FUNCSIG__ << std::endl;
  static_lib::StaticLib::Func1();
}
