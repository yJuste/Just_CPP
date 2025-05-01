// ************************************************************************** //
//                                                                            //
//                OperatorOverloadFixed.cpp                                   //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.h"

// Arithmetic: = + - * /
Fixed	&Fixed::operator = ( const Fixed & f )
{
	if (this != &f)
		_nb = f.getRawBits();
	return *this;
}

Fixed	Fixed::operator + ( const Fixed & f ) const
{
	Fixed		res;

	res.setRawBits(_nb + f.getRawBits());
	return res;
}

Fixed	Fixed::operator - ( const Fixed & f ) const
{
	Fixed		res;

	res.setRawBits(_nb - f.getRawBits());
	return res;
}

Fixed	Fixed::operator * ( const Fixed & f ) const
{
	Fixed		res;

	res.setRawBits((_nb * f.getRawBits()) >> _bit);
	return res;
}

Fixed	Fixed::operator / ( const Fixed & f ) const
{
	Fixed		res;

	res.setRawBits((_nb << _bit) / f.getRawBits());
	return res;
}

// Comparison: > < >= <= == !=
bool	Fixed::operator > ( const Fixed & f ) const
{
	return _nb > f.getRawBits();
}

bool	Fixed::operator < ( const Fixed & f ) const
{
	return _nb < f.getRawBits();
}

bool	Fixed::operator >= ( const Fixed & f ) const
{
	return _nb >= f.getRawBits();
}

bool	Fixed::operator <= ( const Fixed & f ) const
{
	return _nb <= f.getRawBits();
}

bool	Fixed::operator == ( const Fixed & f ) const
{
	return _nb == f.getRawBits();
}

bool	Fixed::operator != ( const Fixed & f ) const
{
	return _nb != f.getRawBits();
}

// Printing: <<
std::ostream	&operator << ( std::ostream & o, const Fixed & f )
{
	return o << f.toFloat();
}
