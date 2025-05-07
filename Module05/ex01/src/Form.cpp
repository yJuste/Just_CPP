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

Form::Form() : _name( "[No Name]" ), _approved( false ), _toSign( 149 ), _toExec( 150 ) {}
Form::~Form() {}

Form::Form( const Form & b ) : _name( b.getName() ), _approved( b.getApproved() ), _toSign( b.getApproved() ), _toExec( b.getToExec() ) {}

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

bool	Form::beSigned( const Bureaucrat & b )
{
	if (b.getGrade() <= _toSign)
		return _approved = true, true;
	else
		return throw GradeTooLowException(), false;
}

// ~etter

const std::string	Form::getName() const { return _name; }
bool	Form::getApproved() const { return _approved; }
int	Form::getToSign() const { return _toSign; }
int	Form::getToExec() const { return _toExec; }
