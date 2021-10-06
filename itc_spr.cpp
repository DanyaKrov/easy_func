#include "easy.h"
#include <iostream>

using namespace std;

int itc_spr(int a, int b)
{
    int c = a * b;
    if (c < 0) {
		c = c * -1;
    } else {
		c = c;
	}
    return c;
}
