#ifndef STRINGS_DEMO_HPP
#define STRINGS_DEMO_HPP

#include <cstring>
#include <iostream>

void classic_string()
{
    char *str = "Hello ";
    char *data = "world";

    // extra +1 is needed because of null terminator
    unsigned long length = strlen(str) + strlen(data) + 1;

    char *new_str = new char[length];

    if (new_str != NULL)
    {
        strcpy(new_str, str);
        strcat(new_str, data);

        std::cout << new_str << std::endl;

        delete[] new_str;
    }
}

#endif // STRINGS_DEMO_HPP
