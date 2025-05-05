// ************************************************************************** //
//                                                                            //
//                ICharacter.class.h                                          //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef ICHARACTER_CLASS_H
# define ICHARACTER_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "AMateria.class.h"
class AMateria;

// ************************************************************************** //
//                         Interface Character Class                          //
// ************************************************************************** //

class	ICharacter
{
	private:

		ICharacter( const ICharacter & );

		ICharacter & operator = ( const ICharacter & );

	public:

		ICharacter();
		virtual ~ICharacter();

		// Methode

		virtual void equip( AMateria * ) = 0;
		virtual void unequip( int ) = 0;
		virtual void use( int, ICharacter & ) = 0;

		// ~etter

		virtual const std::string & getName() const = 0;
};

#endif
