// ************************************************************************** //
//                                                                            //
//                Cat.class.h                                                 //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef CAT_CLASS_H
# define CAT_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "AAnimal.class.h"
# include "Brain.class.h"

// ************************************************************************** //
//                                 Cat Class                                  //
// ************************************************************************** //

class	Cat : public AAnimal
{
	private:

		Brain		*_brain;

	public:

		Cat();
		~Cat();

		Cat( const Cat & );

		Cat & operator = ( const Cat & );

		// Methode

		void makeSound() const;
};

#endif
