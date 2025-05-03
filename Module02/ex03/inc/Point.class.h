// ************************************************************************** //
//                                                                            //
//                Point.class.h                                               //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef POINT_CLASS_H
# define POINT_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "Fixed.class.h"

// ************************************************************************** //
//                                Point Class                                 //
// ************************************************************************** //

class	Point
{
	private:

		const Fixed		_x;
		const Fixed		_y;

		Point & operator = ( const Point & );

	public:

		Point();
		~Point();

		Point ( const Point & );
		Point ( const float, const float );

		// Getter
		const Fixed & getX() const;
		const Fixed & getY() const;
};

std::ostream & operator << ( std::ostream & , const Point & );

bool bsp( const Point, const Point, const Point, const Point );

#endif
