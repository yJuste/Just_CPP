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

// ************************************************************************** //
//                             MateriaSource Class                            //
// ************************************************************************** //

class	MateriaSource
{
	public:

		MateriaSource();
		~MateriaSource();

		MateriaSource( const MateriaSource & );

		MateriaSource & operator = ( const MateriaSource & );
};

std::ostream	&operator << ( std::ostream &, const MateriaSource & );

#endif
