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

// ************************************************************************** //
//                              Bureaucrat Class                              //
// ************************************************************************** //

class	Bureaucrat
{
	private:

		const std::string		_name;
		unsigned int			_grade;

		Bureaucrat();

	public:

		~Bureaucrat();

		Bureaucrat( const Bureaucrat & );
		Bureaucrat( const std::string, int );

		Bureaucrat & operator = ( const Bureaucrat & );

		// Methode

		void upgrade();
		void downgrade();

		// ~etter

		const std::string & getName() const;
		unsigned int getGrade() const;
};

std::ostream & operator << ( std::ostream &, const Bureaucrat & );

#endif
