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

# include "ScavTrap.class.h"
# include "FragTrap.class.h"

// ************************************************************************** //
//                                DiamondTrap Class                           //
// ************************************************************************** //

class	DiamondTrap : public ScavTrap, FragTrap
{
	private:

		std::string		_name;

		DiamondTrap();

	public:

		~DiamondTrap();

		DiamondTrap( const DiamondTrap & );
		DiamondTrap( const std::string name );

		// Operator Overload

		DiamondTrap & operator = ( const DiamondTrap & );

		// Methode

		void attack( const std::string & );
		void whoAmI() const;

		// Getter

		std::string getName() const;
};

#endif
