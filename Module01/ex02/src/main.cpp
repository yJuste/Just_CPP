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
	std::string	brain = "HI THIS IS BRAIN";

	std::string	*brainPTR = &brain;
	std::string	&brainREF = brain;

	std::cout << "Here are the addresses :" << std::endl;
	std::cout << "Here is the address of brainPTR: " << "\033[32m" << brainPTR << "\033[0m" << std::endl;
	std::cout << "Here is the address of brainREF: " << "\033[32m" << &brainREF << "\033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "Here are the values : " <<std::endl;
	std::cout << "Here is the value of brainPTR: " << "\033[32m" << *brainPTR << "\033[0m" << std::endl;
	std::cout << "Here is the value of brainREF: " << "\033[32m" << brainREF << "\033[0m" << std::endl;
	return 0;
}
