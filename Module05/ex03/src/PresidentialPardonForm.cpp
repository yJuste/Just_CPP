// ************************************************************************** //
//                                                                            //
//                PresidentialPardonForm.cpp                                  //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "PresidentialPardonForm.class.h"

// ~Structor

PresidentialPardonForm::PresidentialPardonForm() : AForm( "[No Name]", 25, 5 ) {}
PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & p ) : AForm( p.getName(), p.getApproved(), p.getToSign(), p.getToExec() ) {}

PresidentialPardonForm::PresidentialPardonForm( const std::string & target ) : AForm( target, 25, 5 ) {}

// Operator Overload

PresidentialPardonForm	&PresidentialPardonForm::operator = ( const PresidentialPardonForm & p ) { (void)p; return *this; }

// Methode

void	PresidentialPardonForm::executeForm() const
{
	std::cout << "\033[96m" << getName() << ", you have been pardoned by Zaphod Beeblerox. 😌" << "\033[0m" << std::endl;
}
