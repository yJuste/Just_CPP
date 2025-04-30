// ************************************************************************** //
//                                                                            //
//                Fixed.cpp                                                   //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.h"

const int		Fixed::_bit = 8;

// ~Structor
Fixed::Fixed() : _nb( 0 ) {}

Fixed::~Fixed() {}

Fixed::Fixed( const Fixed & src ) { *this = src; }

Fixed::Fixed( const int nb )
{
	_nb = nb << _bit;
}

Fixed::Fixed( const float nb )
{
	_nb = roundf(nb * (1 << _bit));
}

// Operator overload
Fixed	&Fixed::operator = ( const Fixed & f )
{
	if (this != &f)
		_nb = f.getRawBits();
	return *this;
}

Fixed	&Fixed::operator + ( const Fixed & f )
{
	(void)f;
	return *this;
}

Fixed	&Fixed::operator - ( const Fixed & f )
{
	(void)f;
	return *this;
}

Fixed	&Fixed::operator * ( const Fixed & f )
{
	(void)f;
	return *this;
}

Fixed	&Fixed::operator / ( const Fixed & f )
{
	(void)f;
	return *this;
}

std::ostream	&operator << ( std::ostream & o, const Fixed & f )
{
	return o << f.toFloat();
}

// Methode
float	Fixed::toFloat() const
{
	return static_cast<float>(_nb) / (1 << _bit);
}

int	Fixed::toInt() const
{
	return _nb >> _bit;
}

// Setter
void	Fixed::setRawBits( const int raw ) { _nb = raw; }

// Getter
int	Fixed::getRawBits() const { return _nb; }
