// ************************************************************************** //
//                                                                            //
//                AForm.cpp                                                   //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "AForm.class.h"

// ~Structor

AForm::AForm() : _name( "[No Name]" ), _approved( false ), _toSign( 150 ), _toExec( 150 ) {}
AForm::~AForm() {}

AForm::AForm( const AForm & b ) : _name( b.getName() ), _approved( b.getApproved() ), _toSign( b.getApproved() ), _toExec( b.getToExec() ) {}

AForm::AForm( const std::string & name, const int toSign, const int toExec ) : _name( name ), _approved( false ), _toSign( toSign ), _toExec( toExec ) { checkGrade(); }

AForm::AForm( const std::string & name, bool approved, const int toSign, const int toExec ) : _name( name ), _approved( approved ), _toSign( toSign ), _toExec( toExec ) { checkGrade(); }

// Operator Overload

AForm	&AForm::operator = ( const AForm & f ) { (void)f; return *this; }

std::ostream	&operator << ( std::ostream & o, const AForm & f )
{
	o << "AForm's name: " << "\033[32m" << f.getName() << "\033[0m" << std::endl;
	o << "Approval: " << "\033[32m";
	if (f.getApproved()) o << "true"; else o << "false"; o << "\033[0m" << std::endl;
	o << "Grade required to sign: " << "\033[32m" << f.getToSign() << "\033[0m" << std::endl;
	o << "Grade required to execute: " << "\033[32m" << f.getToExec() << "\033[0m" << std::endl;
	return o;
}

// Methode

void	AForm::beSigned( const Bureaucrat & b )
{
	if (b.getGrade() <= _toSign)
		_approved = true;
	else
		throw GradeTooLowException();
}

void	AForm::execute( const Bureaucrat & b ) const
{
	if (_approved == false)
		throw FormNotSignedException();
	if (b.getGrade() > _toExec)
		throw GradeTooLowException();
	executeForm();
}

// ~etter

const std::string	AForm::getName() const { return _name; }
bool	AForm::getApproved() const { return _approved; }
int	AForm::getToSign() const { return _toSign; }
int	AForm::getToExec() const { return _toExec; }

// Private Methode

void	AForm::checkGrade() const
{
	if (_toSign <= 0 || _toExec <= 0) throw GradeTooHighException();
	else if (_toSign > 150 || _toExec > 150) throw GradeTooLowException();
}

