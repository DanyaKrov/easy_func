#include "easy.h"
#include <iostream>

using namespace std;

double itc_str(double a, double b, double c)
{
    if (a > b + c)
        return -1;
    else if (b > a + c)
        return -1;
    else if (c > a + b)
        return -1;
    else{
        double p = (a + b + c) / 2.0;
        double num = p * (p - a) * (p - b) * (p - c);
        return itc_sqrt(num);
    }
}
