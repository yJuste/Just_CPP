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
	ClapTrap	martin("martin");
	ClapTrap	Jean("Jean");

	std::cout << std::endl;
	martin.attack("Jean");
	Jean.takeDamage(2);
	Jean.takeDamage(2);
	Jean.takeDamage(2);
	Jean.takeDamage(2);
	Jean.takeDamage(2);
	Jean.takeDamage(2);
	Jean.takeDamage(2);
	Jean.takeDamage(2);
	martin.beRepaired(1);
	martin.beRepaired(1);
	martin.beRepaired(1);
	martin.beRepaired(1);
	martin.beRepaired(1);
	martin.beRepaired(1);
	martin.beRepaired(100);
	martin.beRepaired(0);
	martin.beRepaired(0);
	martin.beRepaired(0);
	martin.beRepaired(0);
	martin.takeDamage(1000);
	martin.takeDamage(1000);
	std::cout << std::endl;
	return 0;
}
