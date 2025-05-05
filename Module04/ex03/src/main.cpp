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
	AMateria	* m1 = new Ice();
	AMateria	* m2 = new Cure();
	AMateria	* m3 = NULL;
	ICharacter	* eren = new Character("Eren");

	std::cout << "\033[94m" << std::endl;

	m3 = m2->clone();
	std::cout << "I was cloned : " << *m3 << std::endl;

	std::cout << "\033[0m" << std::endl;
	std::cout << "\033[95m" << std::endl;

	std::cout << "I ice Eren: "; m1->use(*eren);
	std::cout << "NOOO, Eren, I will heal you: "; m2->use(*eren);
	
	std::cout << "\033[0m" << std::endl;

	delete m1; delete m2; delete m3; delete eren;
	return 0;
}
