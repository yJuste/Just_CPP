// ************************************************************************** //
//                                                                            //
//                PresidentialPardonForm.class.h                              //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef PRESIDENTIALPARDONFORM_CLASS_H
# define PRESIDENTIALPARDONFORM_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "AForm.class.h"

// ************************************************************************** //
//                       PresidentialPardonForm Class                         //
// ************************************************************************** //

class	PresidentialPardonForm : public AForm
{
	private:

		PresidentialPardonForm();
		PresidentialPardonForm & operator = ( const PresidentialPardonForm & );

		void executeForm() const;

	public:

		~PresidentialPardonForm();

		PresidentialPardonForm( const PresidentialPardonForm & );
		PresidentialPardonForm( const std::string & );
};

#endif
