#include "easy.h"
#include <iostream>

int itc_revnbr(int a)
{
   int b = a % 10;
   while ((a /= 10) != 0) b = b * 10 + a % 10;
   return b;
}