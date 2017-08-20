#ifndef CLASSIC_POINTER_HPP
#define CLASSIC_POINTER_HPP

#include <iostream>
#include <memory>

class demo
{
public:
    demo()
    {
        std::cout << "Constructor called\n";
    }
    ~demo()
    {
        std::cout << "Destructor called \n";
    }
};

void classic_pointer()
{
    int val = 10;
    int *ptr = &val;

    *ptr = 20;

    std::cout << "Value is " << *ptr << std::endl;

    demo *addr1 = new demo;
    demo *addr2 = new demo;
}

#endif // CLASSIC_POINTER_HPP
