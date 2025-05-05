// ************************************************************************** //
//                                                                            //
//                Ice.class.h                                                 //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef ICE_CLASS_H
# define ICE_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "AMateria.class.h"

// ************************************************************************** //
//                                  Ice Class                                 //
// ************************************************************************** //

class	Ice : public AMateria
{
	public:

		Ice();
		~Ice();

		Ice( const Ice & );

		Ice & operator = ( const Ice & );

		// Methode

		AMateria * clone() const;
		void use( ICharacter & );
};

#endif
