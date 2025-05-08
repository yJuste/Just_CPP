// ************************************************************************** //
//                                                                            //
//                ShrubberyCreationForm.class.h                               //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef SHRUBBERYCREATIONFORM_CLASS_H
# define SHRUBBERYCREATIONFORM_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "AForm.class.h"

// ************************************************************************** //
//                        ShrubberyCreationForm Class                         //
// ************************************************************************** //

class	ShrubberyCreationForm : public AForm
{
	private:

		ShrubberyCreationForm();
		ShrubberyCreationForm & operator = ( const ShrubberyCreationForm & );

		void executeForm() const;

	public:

		~ShrubberyCreationForm();

		ShrubberyCreationForm( const ShrubberyCreationForm & );
		ShrubberyCreationForm( const std::string & );
};

#endif
