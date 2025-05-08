// ************************************************************************** //
//                                                                            //
//                Form.cpp                                                    //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Form.class.h"

// ~Structor

Form::Form() : _name( "[No Name]" ), _approved( false ), _toSign( 150 ), _toExec( 150 ) {}
Form::~Form() {}

Form::Form( const Form & b ) : _name( b.getName() ), _approved( b.getApproved() ), _toSign( b.getApproved() ), _toExec( b.getToExec() ) {}

Form::Form( const std::string & name, const int toSign, const int toExec ) : _name( name ), _approved( false ), _toSign( toSign ), _toExec( toExec )
{
	if (toSign <= 0) throw GradeTooHighException();
	else if (toSign > 150) throw GradeTooLowException();
	else if (toExec <= 0) throw GradeTooHighException();
	else if (toExec > 150) throw GradeTooLowException();
}

// Operator Overload

Form	&Form::operator = ( const Form & f ) { (void)f; return *this; }

std::ostream	&operator << ( std::ostream & o, const Form & f )
{
	o << "Form's name: " << "\033[32m" << f.getName() << "\033[0m" << std::endl;
	o << "Approval: " << "\033[32m";
	if (f.getApproved()) o << "true"; else o << "false"; o << "\033[0m" << std::endl;
	o << "Grade required to sign: " << "\033[32m" << f.getToSign() << "\033[0m" << std::endl;
	o << "Grade required to execute: " << "\033[32m" << f.getToExec() << "\033[0m" << std::endl;
	return o;
}

// Methode

void	Form::beSigned( const Bureaucrat & b )
{
	if (b.getGrade() <= _toSign)
		_approved = true;
	else
		throw GradeTooLowException();
}

// ~etter

const std::string	Form::getName() const { return _name; }
bool	Form::getApproved() const { return _approved; }
int	Form::getToSign() const { return _toSign; }
int	Form::getToExec() const { return _toExec; }
