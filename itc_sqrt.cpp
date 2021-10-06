#include "easy.h"
#include <iostream>

using namespace std;

int itc_sqrt(int a)
{
    for (int counter = 0; counter <= 10000; counter ++ )
        if (counter * counter == a)
            return counter;
    return -1;
}
