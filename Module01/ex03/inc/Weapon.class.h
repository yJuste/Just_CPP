// ************************************************************************** //
//                                                                            //
//                Weapon.class.h                                              //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H

// Standard Libraries

# include <iostream>

// ************************************************************************** //
//                               Weapon Class                                 //
// ************************************************************************** //

class	Weapon
{
	private:

		std::string		_type;

		Weapon();

	public:

		Weapon( std::string type );

		// Setter
		void setType( std::string type );

		// Getter
		std::string getType() const;
};

#endif
