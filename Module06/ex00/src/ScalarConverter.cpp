// ************************************************************************** //
//                                                                            //
//                ScalarConverter.cpp                                         //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "ScalarConverter.class.h"

// ~Structor

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter( const ScalarConverter & b ) { *this = b; }

// Operator Overload

ScalarConverter	&ScalarConverter::operator = ( const ScalarConverter & b ) { (void)b; return *this; }

std::ostream	&operator << ( std::ostream & o, const ScalarConverter & b ) { (void)b; return o << "Operator <<" << std::endl; }

// Member functions

void	ScalarConverter::convert( const std::string & s )
{
	std::cout << "The conversion of: " << "\033[32m" << s << "\033[0m" << std::endl;
}
