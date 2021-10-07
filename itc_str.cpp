#include "easy.h"
#include <iostream>

using namespace std;

int itc_str(int a, int b, int c)
{
    if (a > b + c)
        return -1;
    else if (b > a + c)
        return -1;
    else if (c > a + b)
        return -1;
    else if (a <= 0 || b <= 0 || c <= 0)
        return -1;
    else{
        double p = (a + b + c) / 2;
        double num = p * (p - a) * (p - b) * (p - c);
        return itc_sqrt(num);
    }
}
