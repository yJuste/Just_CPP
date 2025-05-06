// ************************************************************************** //
//                                                                            //
//                MateriaSource.class.h                                       //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef MATERIASOURCE_CLASS_H
# define MATERIASOURCE_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "IMateriaSource.class.h"
# include "Ice.class.h"
# include "Cure.class.h"

// ************************************************************************** //
//                             MateriaSource Class                            //
// ************************************************************************** //

class	MateriaSource : public IMateriaSource
{
	private:

		AMateria		*_stock[4];

	public:

		MateriaSource();
		~MateriaSource();

		MateriaSource( const MateriaSource & );

		MateriaSource & operator = ( const MateriaSource & );

		// Methode

		void learnMateria( AMateria * );
		AMateria * createMateria( const std::string & );
};

#endif
