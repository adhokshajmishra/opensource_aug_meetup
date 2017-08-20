#ifndef CLASSIC_ARRAY_HPP
#define CLASSIC_ARRAY_HPP

#include <iostream>

void classic_array()
{
    // size must be known at compile time, and it cannot be grown at run time
    char buffer[20];

    // looping over array
    for (int i = 0; i < 20; ++i)
    {
        buffer[i] = 'A' + i;
        std::cout << buffer[i] << "\n";
    }
}

#endif // CLASSIC_ARRAY_HPP
