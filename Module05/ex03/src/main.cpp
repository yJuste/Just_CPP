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
	Bureaucrat	* verso = NULL;
	AForm		* expedition33 = NULL;
	Intern		someRandomIntern;

	try
	{
		verso = new Bureaucrat("Verso", 5);
		expedition33 = someRandomIntern.makeForm("Expedition33", "Renoir");

		std::cout << *verso << std::endl;
		std::cout << *expedition33 << std::endl;
		verso->signForm(*expedition33);
		std::cout << *expedition33 << std::endl;
		verso->executeForm(*expedition33);

		std::cout << std::endl;
	}
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }

	delete verso;
	delete expedition33;
	return 0;
}
