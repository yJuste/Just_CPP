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

// ************************************************************************** //
//                        Interface MateriaSource Class                       //
// ************************************************************************** //

class	IMateriaSource
{
	public:

		IMateriaSource();
		~IMateriaSource();

		IMateriaSource( const IMateriaSource & );

		IMateriaSource & operator = ( const IMateriaSource & );
};

std::ostream	&operator << ( std::ostream &, const IMateriaSource & );

#endif
