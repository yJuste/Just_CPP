// ************************************************************************** //
//                                                                            //
//                main.cpp                                                    //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "main.h"

// ------------PROTOTYPE-------------
Base		*generate();
void		identify( Base * p );
void		identify( Base & p );
// ----------------------------------

int	main(void)
{
	Base		*ptr = generate();

	std::cout << "Pointer Identification:\t\t" << "\033[32m"; identify(ptr); std::cout << "\033[0m";
	std::cout << "Reference Identification:\t" << "\033[32m"; identify(*ptr); std::cout << "\033[0m";

	delete ptr;
	return 0;
}

Base	*generate()
{
	std::srand(time(NULL));
	int random = std::rand() % 33 + 1;

	if (random <= 11)
		return new A;
	else if (random <= 22)
		return new B;
	else
		return new C;
}

void	identify( Base * p )
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "\033[91m" << "error" << "\033[0m" << ": Identification Pointer failed" << std::endl;
}

void	identify( Base & p )
{
	try { static_cast<void>(dynamic_cast<A &>(p)); std::cout << "A" << std::endl; return; }
	catch (...) {}
	try { static_cast<void>(dynamic_cast<B &>(p)); std::cout << "B" << std::endl; return; }
	catch (...) {}
	try { static_cast<void>(dynamic_cast<C &>(p)); std::cout << "C" << std::endl; return; }
	catch (...) {}
	std::cout << "\033[91m" << "error" << "\033[0m" << ": Identification Reference failed" << std::endl;
}
