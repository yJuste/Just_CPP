// ************************************************************************** //
//                                                                            //
//                RobotomyRequestForm.cpp                                     //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "RobotomyRequestForm.class.h"

// ~Structor

RobotomyRequestForm::RobotomyRequestForm() : AForm( "[No Name]", 72, 45 ) {}
RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & r ) : AForm( r.getName(), r.getApproved(), r.getToSign(), r.getToExec() ) {}

RobotomyRequestForm::RobotomyRequestForm( const std::string & target ) : AForm( target, 72, 45 ) {}

// Operator Overload

RobotomyRequestForm	&RobotomyRequestForm::operator = ( const RobotomyRequestForm & r ) { (void)r; return *this; }

// Methode

void	RobotomyRequestForm::executeForm() const {}
