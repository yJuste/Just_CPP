// ************************************************************************** //
//                                                                            //
//                HumanA.class.h                                              //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_CLASS_H
# define HUMANA_CLASS_H

// Standard Libraries

# include <iostream>

// Dependencies

# include "Weapon.class.h"

// ************************************************************************** //
//                               HumanA Class                                 //
// ************************************************************************** //

class	HumanA
{
	private:

		std::string		_name;
		Weapon			&_weapon;

		HumanA();

	public:

		HumanA( std::string name, Weapon & weapon );

		// Methode
		void attack() const;
};

#endif
