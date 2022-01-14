#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    Fixed x;
    Fixed y;
    public:
        Point( void );
        Point( const Point& );
        Point( const float&, const float& );
        ~Point();

        Fixed getX( void );
        Fixed getY( void );

        Point& operator=( const Point& );
    };

    bool bsp( Point const, Point const, Point const c, Point const );


#endif