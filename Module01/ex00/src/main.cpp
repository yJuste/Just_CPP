// ************************************************************************** //
//                                                                            //
//                main.cpp                                                    //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "main.h"

int	main(void)
{
	Zombie		*zombie = NULL;

	zombie = newZombie("Charles");
	delete zombie;
	randomChump("Switch");
	return 0;
}
