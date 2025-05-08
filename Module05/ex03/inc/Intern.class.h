// ************************************************************************** //
//                                                                            //
//                Intern.class.h                                              //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef INTERN_CLASS_H
# define INTERN_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "AForm.class.h"
# include "ShrubberyCreationForm.class.h"
# include "RobotomyRequestForm.class.h"
# include "PresidentialPardonForm.class.h"

// ************************************************************************** //
//                                Intern Class                                //
// ************************************************************************** //

class	Intern
{
	private:

		static AForm * createShrubberyCreationForm( const std::string & );
		static AForm * createRobotomyRequestForm( const std::string & );
		static AForm * createPresidentialPardonForm( const std::string & );

		static std::string	toLower( const std::string & );

	public:

		Intern();
		~Intern();

		Intern( const Intern & );
		Intern & operator = ( const Intern & );

		// Methode

		AForm * makeForm( const std::string &, const std::string & ) const;

		// Exception

		class NoFormFound;

		// Keywords

		struct Entry
		{
			const char * keywords[2];
			AForm * (*create)( const std::string & );
		};
};

// Exception

class	Intern::NoFormFound : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Intern couldn't find the Form."; }
};

#endif
