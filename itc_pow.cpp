#include "easy.h"
#include <iostream>

using namespace std;

int itc_pow(int n, int i)
{
    int m = 1;
    while (i > 0){
        i --;
        m *= n;
    }
    return m;
}

