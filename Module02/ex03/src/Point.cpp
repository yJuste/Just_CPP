// ************************************************************************** //
//                                                                            //
//                Point.cpp                                                   //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Point.class.h"

// ~Structor

Point::Point() : _x( 0 ), _y( 0 ) {}
Point::~Point() {}

Point::Point( const Point & p ) : _x( p._x ), _y ( p._y ) {}
Point::Point( const float a, const float b ) : _x( a ), _y( b ) {}

// Operator Overload

Point	&Point::operator = ( const Point & p ) { (void)p; return *this; }
std::ostream	&operator << ( std::ostream & o, const Point & p ) { return o << "( " << p.getX().toFloat() << " ; " << p.getY().toFloat() << " )"; }

// Getter

const Fixed	&Point::getX() const { return _x; }
const Fixed	&Point::getY() const { return _y; }
