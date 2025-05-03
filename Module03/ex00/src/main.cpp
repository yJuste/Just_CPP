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
	ClapTrap	Martin("Martin");
	ClapTrap	Jean("Jean");
	ClapTrap	Spice("Spice");

	std::cout << std::endl;
	Martin.attack("Jean");
	Jean.takeDamage(2);
	Jean.takeDamage(2);
	Jean.takeDamage(2);
	Jean.takeDamage(2);
	Jean.takeDamage(2);
	Jean.takeDamage(2);
	Jean.takeDamage(2);
	Jean.takeDamage(2);
	std::cout << std::endl;
	Martin.beRepaired(1);
	Martin.beRepaired(100);
	Martin.takeDamage(1000);
	Martin.takeDamage(1000);
	Martin.attack("Jean");
	std::cout << std::endl;
	Spice.beRepaired(0);
	Spice.beRepaired(0);
	Spice.beRepaired(0);
	Spice.beRepaired(0);
	Spice.beRepaired(0);
	Spice.beRepaired(0);
	Spice.beRepaired(0);
	Spice.beRepaired(0);
	Spice.beRepaired(0);
	Spice.beRepaired(0);
	Spice.beRepaired(0);
	Spice.beRepaired(0);
	std::cout << std::endl;
	return 0;
}
