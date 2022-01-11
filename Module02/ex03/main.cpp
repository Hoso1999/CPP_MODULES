#include "Point.hpp"

int main( void )
{
    Point p1(7.0f, 7.0f);
    Point p2(11.0f, 1.0f);
    Point p3(2.0f, 2.0f);
    Point p(8.0f, 3.0f);

    if (bsp(p1, p2, p3, p))
        std::cout << "True" << std::endl;
    else
        std::cout << "False" << std::endl;
}
