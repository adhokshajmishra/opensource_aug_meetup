#ifndef MODERN_ARRAY_HPP
#define MODERN_ARRAY_HPP

#include <algorithm>
#include <iostream>
#include <vector>

void modern_array()
{
    std::vector<int> buffer(10);

    // iterating elements
    int num = 1;
    for (int& n : buffer) // you don't specify count. Bounds are kept in shape automatically
    {
        n = num++;
    }

    // iterate like an array
    for (unsigned long i = 0; i < buffer.size(); ++i)
    {
        std::cout << buffer[i] << " "; // or use buffer.at(i);
    }

    std::cout << "\n";

    // iterate with for_each and lambda/functor
    std::for_each(buffer.begin(), buffer.end(), [](int &n){ n++; });

    // dynamically extend and insert more data

    for (unsigned long i = 0; i < 5; ++i)
    {
        buffer.push_back(-10);
    }

    // convert to traditional array
    int *ptr = &buffer[0];

    for (unsigned long i = 0; i < buffer.size(); ++i)
    {
        std::cout << ptr[i] << " ";
    }

    std::cout << "\n";
}

#endif // MODERN_ARRAY_HPP
