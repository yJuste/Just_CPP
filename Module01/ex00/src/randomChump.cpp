// ************************************************************************** //
//                                                                            //
//                randomChump.cpp                                             //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Zombie.class.h"

// Better to allocate on the stack when it ephemere.
void	Zombie::randomChump( std::string name )
{
	Zombie		zombie = Zombie(name);

	std::cout << name << ": "; _announce();
}

void	Zombie::_announce()
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
