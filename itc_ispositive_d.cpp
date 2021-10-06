#include "easy.h"
#include <iostream>

using namespace std;

bool itc_ispositive_d(double number)
{
    if (number > 0.0){
        return true;
    }
    else if (number < 0.0){
        return false;
    }
}
