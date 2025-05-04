// ************************************************************************** //
//                                                                            //
//                Brain.class.h                                               //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H

// Standard Libraries

# include <iostream>

// ************************************************************************** //
//                                 Brain Class                                //
// ************************************************************************** //

class	Brain
{
	private:

		std::string		_ideas[100];

	public:

		Brain();
		~Brain();

		Brain( const Brain & b);

		Brain & operator = ( const Brain & b );
};

#endif
