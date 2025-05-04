// ************************************************************************** //
//                                                                            //
//                FragTrap.class.h                                            //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "ClapTrap.class.h"

// ************************************************************************** //
//                                FragTrap Class                              //
// ************************************************************************** //

class	FragTrap : public ClapTrap
{
	private:

		FragTrap();

	public:

		~FragTrap();

		FragTrap( const FragTrap & );
		FragTrap( const std::string );

		// Operator Overload

		FragTrap & operator = ( const FragTrap & );

		// Methode

		void highFivesGuys() const;
};

#endif
