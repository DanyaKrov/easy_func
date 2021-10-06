#include "easy.h"
#include <iostream>

double itc_fmin(double a, double b)
{
   if(a <= b) {
		return a; 
   } else {
		return b;
   }
}