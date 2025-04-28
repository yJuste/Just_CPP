// ************************************************************************** //
//                                                                            //
//                HumanB.class.h                                              //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H

// Standard Libraries

# include <iostream>

// Dependencies

# include "Weapon.class.h"

// ************************************************************************** //
//                               HumanB Class                                 //
// ************************************************************************** //

class	HumanB
{
	private:

		std::string		_name;
		Weapon			*_weapon;

		HumanB();

	public:

		HumanB( std::string name );

		// Setter
		void setWeapon( Weapon & weapon );

		// Methode
		void attack();
};

#endif
