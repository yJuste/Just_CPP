// ************************************************************************** //
//                                                                            //
//                newZombie.cpp                                               //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Zombie.class.h"

Zombie	*newZombie( std::string name )
{
	return new Zombie(name);
}
