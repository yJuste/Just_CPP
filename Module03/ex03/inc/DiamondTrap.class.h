// ************************************************************************** //
//                                                                            //
//                DiamondTrap.class.h                                         //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef DIAMONDTRAP_CLASS_H
# define DIAMONDTRAP_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "ClapTrap.class.h"

// ************************************************************************** //
//                                DiamondTrap Class                           //
// ************************************************************************** //

class	DiamondTrap : public ClapTrap
{
	private:

		DiamondTrap();

	public:

		~DiamondTrap();

		DiamondTrap( const DiamondTrap & );
		DiamondTrap( std::string name );

		// Operator Overload

		DiamondTrap & operator = ( const DiamondTrap & );
};

#endif
