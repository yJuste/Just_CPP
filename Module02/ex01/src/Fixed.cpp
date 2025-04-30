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
Fixed::Fixed() : _nb( 0 )
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed( const int nb )
{
	std::cout << "Int constructor called" << std::endl;
	_nb = nb << _bit;
}

Fixed::Fixed( const float nb )
{
	std::cout << "Float constructor called" << std::endl;
	_nb = roundf(nb * (1 << _bit));
}

// Operator overload
Fixed	&Fixed::operator = ( const Fixed & src )
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &src)
		_nb = src.getRawBits();
	return *this;
}

std::ostream	&operator << ( std::ostream & o, const Fixed & src )
{
	o << src.toFloat();
	return o;
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
