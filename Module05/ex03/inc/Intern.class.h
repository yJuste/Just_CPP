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

// ************************************************************************** //
//                                Intern Class                                //
// ************************************************************************** //

class	Intern
{
	private:

		Intern();

		Intern & operator = ( const Intern & );

	public:

		~Intern();

		Intern( const Intern & );
};

#endif
