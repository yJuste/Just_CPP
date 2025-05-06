// ************************************************************************** //
//                                                                            //
//                Bureaucrat.cpp                                                  //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.class.h"

// ~Structor

Bureaucrat::Bureaucrat() { std::cout << "Bureaucrat Constructor Called" << std::endl; }
Bureaucrat::~Bureaucrat() { std::cout << "Bureaucrat Destructor Called" << std::endl; }

Bureaucrat::Bureaucrat( const Bureaucrat & a ) { *this = a; }

// Operator Overload

Bureaucrat	&Bureaucrat::operator = ( const Bureaucrat & b ) { (void)b; return *this; }

std::ostream	&operator << ( std::ostream & o, const Bureaucrat & b ) { (void)b; return o << "Name of the Bureaucrat: " << std::endl; }
