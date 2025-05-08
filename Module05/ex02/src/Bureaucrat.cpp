// ************************************************************************** //
//                                                                            //
//                Bureaucrat.cpp                                              //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.class.h"

// ~Structor

Bureaucrat::Bureaucrat() : _name( "[No name]" ), _grade( 150 ) {}
Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat( const Bureaucrat & b ) : _name ( b.getName() ), _grade( b.getGrade() ) {}

Bureaucrat::Bureaucrat( const std::string & name, int grade ) : _name( name ), _grade( grade )
{
	if (grade <= 0) { _grade = 1; throw GradeTooHighException(); }
	if (grade > 150) { _grade = 150; throw GradeTooLowException(); }
}

// Operator Overload

Bureaucrat	&Bureaucrat::operator = ( const Bureaucrat & b ) { (void)b; return *this; }

std::ostream	&operator << ( std::ostream & o, const Bureaucrat & b ) { return o << "\033[33m" << b.getName() << "\033[0m" << ", bureaucrat grade " << "\033[33m" << b.getGrade() << "\033[0m" << std::endl; }

// Methode

void	Bureaucrat::upgrade() { if (--_grade <= 0) return (_grade++, throw GradeTooHighException()); }

void	Bureaucrat::downgrade() { if (++_grade > 150) return (_grade--, throw GradeTooLowException()); }

void	Bureaucrat::signForm( AForm & f ) const
{
	try { f.beSigned(*this); std::cout << "\033[34m" << getName() << " signed " << f.getName() << "\033[0m" << std::endl; }
	catch ( std::exception & e ) { std::cerr << "\033[34m" << getName() << " cannot sign the form because the Taylor Swift's concert is soon." << "\033[0m" << std::endl; }
}

void	Bureaucrat::executeForm( const AForm & form ) const
{
	try { form.execute(*this); std::cout << getName() << " executed " << form.getName(); }
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }
}

// ~etter

const std::string	&Bureaucrat::getName() const { return _name; }
int	Bureaucrat::getGrade() const { return _grade; }
