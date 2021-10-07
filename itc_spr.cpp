#include "easy.h"
#include <iostream>

using namespace std;

int itc_spr(int a, int b)
{
    int c;
    if (a <= 0 || b <= 0) {
		c = -1;
    } else {
		c = a * b;
	}
    return c;
}
