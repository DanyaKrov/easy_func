#include "easy.h"
#include <iostream>

int itc_abs(int a)
{
    int c;
    if (a < 0) {
		c = a * -1;
    } else {
		c = a;
	}
    return c;
}
