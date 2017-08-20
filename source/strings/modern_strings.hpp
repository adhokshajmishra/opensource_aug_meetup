#ifndef MODERN_STRINGS_HPP
#define MODERN_STRINGS_HPP

#include <iostream>
#include <string>

void modern_string()
{
    std::string str1 = "Hello ";
    std::string str2("world");

    std::string greeting = str1 + str2;

    std::cout <<greeting << std::endl;

    if (greeting.find(str1) != std::string::npos)
    {
        std::cout << "Greeting contains string [" << str1 << "]\n";
    }
}

#endif // MODERN_STRINGS_HPP
