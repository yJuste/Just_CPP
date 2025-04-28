// ************************************************************************** //
//                                                                            //
//                HumanA.cpp                                                  //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "HumanA.class.h"

HumanA::HumanA( std::string name, Weapon & weapon ) : _name(name), _weapon(weapon) {}

// Methode
void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
