// ************************************************************************** //
//                                                                            //
//                WrongCat.class.h                                            //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef WRONGCAT_CLASS_H
# define WRONGCAT_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "WrongAnimal.class.h"

// ************************************************************************** //
//                                 WrongCat Class                             //
// ************************************************************************** //

class	WrongCat : public WrongAnimal
{
	public:

		WrongCat();
		~WrongCat();

		WrongCat( const WrongCat & );

		WrongCat & operator = ( const WrongCat & );

		// Methode

		void makeSound() const;
};

#endif
