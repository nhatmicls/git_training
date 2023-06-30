#include "compare.h"

#include <iostream>

void compare_number(int input_1, int input_2)
{
    if (input_1 > input_2)
    {
        std::cout << "Number 1 is bigger then number 2";
    }
    else if (input_1 < input_2)
    {
        std::cout << "Number 1 is smaller then number 2";
    }
    else
    {
        std::cout << "Number 1 is equal number 2";
    }

    return;
}