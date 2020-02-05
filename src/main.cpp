#include <iostream>

#include "../include/fraction.h"
int main ( void )
{
    Fraction a{3, 4};
    std::cout << a.get_n() << "/" << a.get_d() << std::endl;

    if(is_zero(a))
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;
    if(is_proper(a))
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;
    std::cout << a.get_n() << std::endl;
    std::cout << a.get_d() << std::endl;

    Fraction b{15, 4};
    std::cout << b.get_n() << "/" << b.get_d() << std::endl;

    if(is_proper(b))
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;
    std::cout << MakeProper(b) << " " << b.get_n() << "/" << b.get_d() << std::endl;

    Fraction c{9 , 12};
    std::cout << c.get_n() << "/" << c.get_d() << std::endl;
    if(is_reduce(c))
        std::cout << "yes" << std::endl;
    else
        std::cout << "no" << std::endl;
    reduce(c);

    std::cout << mdc(c.get_n(), c.get_d()) << "/" << c.get_d() << std::endl;
    return 0;
}
