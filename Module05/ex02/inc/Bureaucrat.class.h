// ************************************************************************** //
//                                                                            //
//                Bureaucrat.class.h                                          //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_CLASS_H
# define BUREAUCRAT_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "AForm.class.h"
class AForm;

// ************************************************************************** //
//                              Bureaucrat Class                              //
// ************************************************************************** //

class	Bureaucrat
{
	private:

		const std::string		_name;
		int				_grade;

		Bureaucrat();

		Bureaucrat & operator = ( const Bureaucrat & );

	public:

		~Bureaucrat();

		Bureaucrat( const Bureaucrat & );
		Bureaucrat( const std::string &, int );

		// Methode

		void upgrade();
		void downgrade();
		void signForm( AForm & ) const;

		// ~etter

		const std::string & getName() const;
		int getGrade() const;

		// Exception

		class GradeTooHighException;
		class GradeTooLowException;
};

std::ostream & operator << ( std::ostream &, const Bureaucrat & );

// Exception

class	Bureaucrat::GradeTooHighException : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Grade Too High: It can only be within [ 1-150 ]"; }
};

class	Bureaucrat::GradeTooLowException : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Grade Too Low: It can only be within [ 1-150 ]"; }
};

#endif
