#include <iostream>

#include "sum.h"

int main()
{
   int a{ 1 }, b{ 2 };
   int c = sum(a, b);
   std::cout << "(a=" << a << ") + (b=" << b << ") = " << c << std::endl;
   return 0;
}