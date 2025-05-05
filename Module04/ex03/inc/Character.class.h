// ************************************************************************** //
//                                                                            //
//                Character.class.h                                           //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef CHARACTER_CLASS_H
# define CHARACTER_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "AMateria.class.h"
# include "ICharacter.class.h"

// ************************************************************************** //
//                                Character Class                             //
// ************************************************************************** //

class	Character : public ICharacter
{
	private:

		int			_index;
		const std::string	_name;
		AMateria		*_item[4];

		Character();

	public:

		virtual ~Character();

		Character( const Character & );
		Character( const std::string & );

		Character & operator = ( const Character & );

		// Methode

		void equip( AMateria * );
		void unequip( int );
		void use( int, ICharacter & );

		// ~etter

		const std::string & getName() const;
		int getIndex() const;
};

std::ostream & operator << ( std::ostream &, const Character & );

#endif
