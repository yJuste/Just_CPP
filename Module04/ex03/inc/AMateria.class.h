// ************************************************************************** //
//                                                                            //
//                AMateria.class.h                                            //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef AMATERIA_CLASS_H
# define AMATERIA_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "ICharacter.class.h"
class ICharacter;

// ************************************************************************** //
//                            Abstract Materia Class                          //
// ************************************************************************** //

class	AMateria
{
	protected:

		const std::string		_type;

	public:

		AMateria();
		virtual ~AMateria();

		AMateria( const AMateria & );
		AMateria( const std::string & );

		AMateria & operator = ( const AMateria & );

		// Methode

		virtual AMateria * clone() const = 0;
		virtual void use( ICharacter & );

		// ~Etter

		const std::string & getType() const;
};

std::ostream	&operator << ( std::ostream &, const AMateria & );

#endif
