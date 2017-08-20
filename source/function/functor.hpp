#ifndef FUNCTOR_HPP
#define FUNCTOR_HPP

#include <iostream>

class DummyFunctor
{
public:
    int operator()(int m, int n)
    {
        return m + n;
    }
};

int add5to7(DummyFunctor functor)
{
    return functor(5, 7);
}

void functor()
{
    DummyFunctor functor;
    int result = add5to7(functor);

    std::cout << "Result from functor call is " << result << std::endl;
}

#endif // FUNCTOR_HPP
