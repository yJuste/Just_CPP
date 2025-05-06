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
	public:

		Bureaucrat();
		~Bureaucrat();

		Bureaucrat( const Bureaucrat & );

		Bureaucrat & operator = ( const Bureaucrat & );
};

std::ostream & operator << ( std::ostream &, const Bureaucrat & );

#endif
