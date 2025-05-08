// ************************************************************************** //
//                                                                            //
//                AForm.class.h                                               //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef AFORM_CLASS_H
# define AFORM_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "Bureaucrat.class.h"
class Bureaucrat;

// ************************************************************************** //
//                            Abstract Form Class                             //
// ************************************************************************** //

class	AForm
{
	private:

		const std::string		_name;
		bool				_approved;
		const int			_toSign;
		const int			_toExec;

		AForm();
		AForm & operator = ( const AForm & );

		void checkGrade() const;

	protected:

		AForm( const std::string &, bool, const int, const int );

		virtual void executeForm() const = 0;

	public:

		virtual ~AForm();

		AForm( const AForm & );
		AForm( const std::string &, const int, const int );

		// Methode

		void beSigned( const Bureaucrat & );
		void execute( const Bureaucrat & ) const;

		// ~etter

		const std::string getName() const;
		bool getApproved() const;
		int getToSign() const;
		int getToExec() const;

		// Exception

		class GradeTooHighException;
		class GradeTooLowException;
		class FormNotSignedException;
};

std::ostream & operator << ( std::ostream &, const AForm & );

// Exception

class	AForm::GradeTooHighException : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Grade Too High: It can only be within [ 1-150 ]"; }
};

class	AForm::GradeTooLowException : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Grade Too Low: It can only be within [ 1-150 ]"; }
};

class	AForm::FormNotSignedException : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: The form is not signed, check again pussy."; }
};

#endif
