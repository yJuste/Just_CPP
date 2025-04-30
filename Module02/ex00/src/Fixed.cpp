// ************************************************************************** //
//                                                                            //
//                Fixed.cpp                                                   //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.h"

Fixed::Fixed() {}

void	Fixed::morph( int c ) const
{
	std::cout << "Integer: " << c << std::endl;
}

void	Fixed::morph( std::string s ) const
{
	std::cout << "String: " << s << std::endl;
}
