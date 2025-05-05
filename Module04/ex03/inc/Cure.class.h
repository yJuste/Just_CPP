// ************************************************************************** //
//                                                                            //
//                Cure.class.h                                                //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef CURE_CLASS_H
# define CURE_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "AMateria.class.h"

// ************************************************************************** //
//                                  Cure Class                                //
// ************************************************************************** //

class	Cure : public AMateria
{
	public:

		Cure();
		~Cure();

		Cure( const Cure & );

		Cure & operator = ( const Cure & );

		// Methode

		AMateria * clone() const;
		void use( ICharacter & );
};

#endif
