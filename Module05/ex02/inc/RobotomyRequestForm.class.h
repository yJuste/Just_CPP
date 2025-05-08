// ************************************************************************** //
//                                                                            //
//                RobotomyRequestForm.class.h                                 //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef ROBOTOMYREQUESTFORM_CLASS_H
# define ROBOTOMYREQUESTFORM_CLASS_H

// Standard Libraries

# include <iostream>
# include <cstdlib>

// Dependences

# include "AForm.class.h"

// ************************************************************************** //
//                         RobotomyRequestForm Class                          //
// ************************************************************************** //

class	RobotomyRequestForm : public AForm
{
	private:

		RobotomyRequestForm();
		RobotomyRequestForm & operator = ( const RobotomyRequestForm & );

		void executeForm() const;

	public:

		~RobotomyRequestForm();

		RobotomyRequestForm( const RobotomyRequestForm & );
		RobotomyRequestForm( const std::string & );

		class RobotomizedFailed;
};

// Exception

class	RobotomyRequestForm::RobotomizedFailed : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: SYSTEM FAILED, ROBOTOMIZED CANCELED"; }
};

#endif
