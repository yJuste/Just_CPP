// ************************************************************************** //
//                                                                            //
//                Form.class.h                                                //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_CLASS_H
# define FORM_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "Bureaucrat.class.h"
class Bureaucrat;

// ************************************************************************** //
//                                 Form Class                                 //
// ************************************************************************** //

class	Form
{
	private:

		const std::string		_name;
		bool				_approved;
		const int			_toSign;
		const int			_toExec;

		Form & operator = ( const Form & );

	public:

		Form();
		~Form();

		Form( const Form & );

		// ~etter

		const std::string getName() const;
		bool getApproved() const;
		int getToSign() const;
		int getToExec() const;

		// Methode

		bool beSigned( const Bureaucrat & );

		// Exception

		class GradeTooHighException;
		class GradeTooLowException;
};

std::ostream & operator << ( std::ostream &, const Form & );

// Exception

class	Form::GradeTooHighException : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Grade Too High: It can only be within [ 1-150 ]"; }
};

class	Form::GradeTooLowException : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Grade Too Low: It can only be within [ 1-150 ]"; }
};

#endif
