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

// ************************************************************************** //
//                                ICharacter Class                            //
// ************************************************************************** //

class	ICharacter
{
	private:

		std::string		_name;
		AMateria		*_item[4];

		ICharacter();

	public:

		ICharacter( const std::string & );
		virtual ~ICharacter();

		ICharacter( const ICharacter & );

		ICharacter & operator = ( const ICharacter & );

		// Methode

		virtual void equip( AMateria * ) = 0;
		virtual void unequip( int ) = 0;
		virtual void use( int, ICharacter & ) = 0;

		// ~etter

		virtual const std::string & getName() const = 0;
};

#endif
