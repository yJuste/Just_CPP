// ************************************************************************** //
//                                                                            //
//                HumanB.cpp                                                  //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "HumanB.class.h"

HumanB::HumanB( std::string name ) : _name(name), _weapon(NULL) {}

// Setter
void	HumanB::setWeapon( Weapon & weapon ) { _weapon = &weapon; }

// Methode
void	HumanB::attack() const
{	
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
