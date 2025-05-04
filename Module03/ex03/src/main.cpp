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
	DiamondTrap		ganon("ganon");

	std::cout << std::endl;
	std::cout << ganon << std::endl;
	ganon.attack("marie");
	ganon.whoAmI();
	std::cout << std::endl;
	return 0;
}
