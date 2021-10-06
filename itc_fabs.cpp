#include "easy.h"
#include <iostream>

double itc_fabs(double a)
{
	double c;
    if (a < 0) {
		c = a*(-1);
    } else {
		c = a;
	}
   return c;
}
