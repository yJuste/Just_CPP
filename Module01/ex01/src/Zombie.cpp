// ************************************************************************** //
//                                                                            //
//                Zombie.cpp                                                  //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Zombie.class.h"

Zombie::Zombie() : _name( "" ) {}

Zombie::Zombie( std::string name )
{
	_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Nooo, " << "\033[32m" << _name << "\033[0m" << " died ! Its last words: « Tell my mom I love her. »" << std::endl;
}

// Setter
void	Zombie::setName( std::string name ) { _name = name; };

void	Zombie::announce() const
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
