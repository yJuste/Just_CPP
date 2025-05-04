// ************************************************************************** //
//                                                                            //
//                Dog.class.h                                                 //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef DOG_CLASS_H
# define DOG_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "Animal.class.h"

// ************************************************************************** //
//                                 Dog Class                                  //
// ************************************************************************** //

class	Dog : public Animal
{
	public:

		Dog();
		~Dog();

		Dog( const Dog & );

		Dog & operator = ( const Dog & );

		// Methode

		void makeSound() const;
};

#endif
