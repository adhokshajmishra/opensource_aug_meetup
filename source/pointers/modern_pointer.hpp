#ifndef MODERN_POINTER_HPP
#define MODERN_POINTER_HPP

#include <iostream>
#include <memory>
#include "classic_pointer.hpp"

std::shared_ptr<demo> return_addr()
{
    std::shared_ptr<demo> ptr = std::make_shared<demo>();

    return ptr;
}

void modern_pointer()
{
    std::unique_ptr<int> ptr = std::make_unique<int>();

    *ptr = 15;

    std::cout << "Value is " << *ptr << std::endl;

    std::shared_ptr<demo> addr1 = return_addr();
    std::shared_ptr<demo> addr2 = return_addr();

    std::cout << "Exiting demo function. Destructors should be called after this\n";
}

#endif // MODERN_POINTER_HPP
