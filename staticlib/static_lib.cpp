#include "stdafx.h"

#include "static_lib.h"

#include <iostream>

namespace static_lib {

void StaticLib::Func1() {
  std::cout << __FUNCSIG__ << std::endl;
}
  
}
