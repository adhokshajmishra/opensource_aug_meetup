#ifndef FUNCTION_POINTER_HPP
#define FUNCTION_POINTER_HPP

#include <iostream>

//let us have a basic function with two parameters
int addInt(int m, int n)
{
    return m + n;
}

// pointer to function which accepts two ints and returns an int
typedef int (*functionPtr)(int,int);

int add2to3(functionPtr ptr)
{
    return ptr(2, 3);
}

void function_pointer()
{
    functionPtr ptr = &addInt;

    int result = add2to3(ptr);

    std::cout << "Result from function pointer call is " << result << std::endl;
}

#endif // FUNCTION_POINTER_HPP
