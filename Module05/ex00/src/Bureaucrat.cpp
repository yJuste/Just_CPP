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

Bureaucrat::Bureaucrat() : _name( "No name" ), _grade(0) {}
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat( const Bureaucrat & a ) { *this = a; }
Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name( name ), _grade( grade ) {}

// Operator Overload

Bureaucrat	&Bureaucrat::operator = ( const Bureaucrat & b ) { (void)b; return *this; }

std::ostream	&operator << ( std::ostream & o, const Bureaucrat & b ) { (void)b; return o << "Name of the Bureaucrat: " << std::endl; }

// Methode

void	Bureaucrat::upgrade() {}
void	Bureaucrat::downgrade() {}

// ~etter

const std::string	&Bureaucrat::getName() const { return _name; }
unsigned int	Bureaucrat::getGrade() const { return _grade; }
