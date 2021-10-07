#include "easy.h"
#include <iostream>

using namespace std;

int itc_scir(int radius)
{
    if (radius <= 0)
        return -1;
    double num = 3.14 * radius * radius;
    return num;
}
