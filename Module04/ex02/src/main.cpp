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
	AAnimal		*a[30];
	//AAnimal	roarAbstract; // Le compilateur cri si tu instancies sur la stack.

	std::cout << "\033[32m";
	for (int i = 0; i < 5; i++)
		a[i] = new Cat();
	std::cout << "\033[0m";
	std::cout << std::endl;
	std::cout << "\033[34m";
	for (int i = 5; i < 10; i++)
		a[i] = new Dog();
	std::cout << "\033[0m";
	std::cout << "\033[36m";
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete a[i];
	std::cout << "\033[0m";
	return 0;
}
