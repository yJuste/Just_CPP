// ************************************************************************** //
//                                                                            //
//                randomChump.cpp                                             //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Zombie.class.h"

void	randomChump( std::string name )
{
	Zombie		zombie = Zombie(name);

	std::cout << name << ": "; zombie.announce();
}
