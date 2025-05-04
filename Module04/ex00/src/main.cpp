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
	const Animal * meta = new Animal();
	const Animal * j = new Dog();
	const Animal * i = new Cat();

	const WrongAnimal * wrongAnimal = new WrongAnimal();
	const WrongAnimal * wrongCat = new WrongCat();

	std::cout << "\033[32m" << std::endl;
	std::cout << "Hear what the CAT says:      "; i->makeSound();
	std::cout << "Hear what the DOG says:      "; j->makeSound();
	std::cout << "Hear what the ANIMAL says:   "; meta->makeSound();
	std::cout << "\033[0m" << std::endl;

	std::cout << "\033[31m" << std::endl;
	std::cout << "Hear what the WRONG_CAT says:      "; wrongCat->makeSound();
	std::cout << "Hear what the WRONG_ANIMAL says:   "; wrongAnimal->makeSound();
	std::cout << "\033[0m" << std::endl;

	delete meta; delete j; delete i; delete wrongAnimal; delete wrongCat;
	return 0;
}
