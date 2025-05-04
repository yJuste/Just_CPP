// ************************************************************************** //
//                                                                            //
//                ScavTrap.class.h                                            //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "ClapTrap.class.h"

// ************************************************************************** //
//                                ScavTrap Class                              //
// ************************************************************************** //

class	ScavTrap : public ClapTrap
{
	private:

		ScavTrap();

	public:

		~ScavTrap();

		ScavTrap( const ScavTrap & );
		ScavTrap( std::string name );

		// Operator Overload

		ScavTrap & operator = ( const ScavTrap & );

		// Methode

		void guardGate() const;
};

#endif
