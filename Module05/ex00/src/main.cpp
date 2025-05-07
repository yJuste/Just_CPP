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
	std::cout << std::endl;

	std::cout << "\033[32m" << "----------- Grade Too Low: -------------" << "\033[0m" << std::endl;
	try { Bureaucrat louis("Louis", 200); }
	catch (std::exception & e) { std::cerr << e.what() << std::endl; }

	std::cout << std::endl;

	std::cout << "\033[32m" << "----------- Grade Too High: -------------" << "\033[0m" << std::endl;
	try { Bureaucrat gabriel("Gabriel", -2000000); }
	catch (std::exception & e) { std::cerr << e.what() << std::endl; }

	std::cout << std::endl;

	std::cout << "\033[32m" << "---------- Increment Too High: ----------" << "\033[0m" << std::endl;
	Bureaucrat	gabriel("Gabriel", 1);

	try { gabriel.upgrade(); }
	catch (std::exception & e) { std::cerr << e.what() << std::endl << gabriel; }

	std::cout << std::endl;

	std::cout << "\033[32m" << "---------- Decrement Too Low: ----------" << "\033[0m" << std::endl;
	Bureaucrat	joachim("Joachim", 150);

	try { joachim.downgrade(); }
	catch (std::exception & e) { std::cerr << e.what() << std::endl << joachim; }

	std::cout << std::endl;
	return 0;
}
