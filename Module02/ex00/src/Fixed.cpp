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

// Operator overload
Fixed &Fixed::operator = ( const Fixed & src )
{
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &src)
		_nb = src.getRawBits();
	return *this;
}

// Setter
void	Fixed::setRawBits( const int raw ) { _nb = raw; }

// Getter
int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _nb;
}
