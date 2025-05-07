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
	try
	{
		std::cout << std::endl;
		Bureaucrat joel("Joel", 1);
		std::cout << "A dude: " << joel << std::endl;
		Form		f1;

		std::cout << f1 << std::endl;
		f1.beSigned(joel);
		std::cout << f1 << std::endl;

		std::cout << "------------------------------------------" << std::endl;
		std::cout << std::endl;

		Bureaucrat ellie("Ellie", 150);
		std::cout << "Another dude: " << ellie << std::endl;
		Form		f2;

		std::cout << f2 << std::endl;
		ellie.signForm(f2);
		std::cout << f2 << std::endl;
	}
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }
	return 0;
}
