// ************************************************************************** //
//                                                                            //
//                newZombie.cpp                                               //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Zombie.class.h"

// Allocation is great for using it after.
Zombie	*Zombie::newZombie( std::string name )
{
	Zombie	*zombie = new Zombie(name);
	return (zombie);
}
