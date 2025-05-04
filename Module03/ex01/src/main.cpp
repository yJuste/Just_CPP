// ************************************************************************** //
//                                                                            //
//                main.cpp                                                    //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "main.h"

int	main(void)
{
	ScavTrap	dad("dad");
	ScavTrap	mom("mom");

	dad.guardGate();
	dad.attack("mom");
	std::cout << dad << std::endl;
	std::cout << mom << std::endl;
	return 0;
}
