#ifndef FUNCTION_BIND_HPP
#define FUNCTION_BIND_HPP

#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

int subtract(int m, int n)
{
    return m - n;
}

void function_bind()
{
    std::vector<int> buffer = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::function<int(int)> mapper = [](int n) -> int { return n + 1; };

    std::cout << "Mapper(10) output is " << mapper(10) << std::endl;

    // source start, source end, destination start, std::function
    std::transform(buffer.begin(), buffer.end(), buffer.begin(), mapper);

    for (int i : buffer)
    {
        std::cout << i << ' ';
    }

    std::cout << std::endl;

    // partially applied (curried) function. Second parameter of subtract() is always 1.
    std::function<int(int)> curry = std::bind(subtract, std::placeholders::_1, 1);
    std::transform(buffer.begin(), buffer.end(), buffer.begin(), curry);

    for (int i : buffer)
    {
        std::cout << i << ' ';
    }

    std::cout << std::endl;
}

#endif // FUNCTION_BIND_HPP
