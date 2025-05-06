// ************************************************************************** //
//                                                                            //
//                IMateriaSource.class.h                                      //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef IMATERIASOURCE_CLASS_H
# define IMATERIASOURCE_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "AMateria.class.h"

// ************************************************************************** //
//                        Interface MateriaSource Class                       //
// ************************************************************************** //

class	IMateriaSource
{
	private:

		IMateriaSource( const IMateriaSource & );

		IMateriaSource & operator = ( const IMateriaSource & );

	public:

		IMateriaSource();
		virtual ~IMateriaSource();

		virtual void learnMateria( AMateria * ) = 0;
		virtual AMateria * createMateria( const std::string & ) = 0;

};

std::ostream	&operator << ( std::ostream &, const IMateriaSource & );

#endif
