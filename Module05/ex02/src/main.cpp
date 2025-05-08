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
	Bureaucrat	* john = NULL;
	AForm		* berry = NULL;

	Bureaucrat	* yuki = NULL;
	AForm		* clapTrap = NULL;

	Bureaucrat	* verso = NULL;
	AForm		* expedition33 = NULL;

	try
	{
		john = new Bureaucrat("John", 137);
		berry = new ShrubberyCreationForm("HomeBerry");

		std::cout << *john << std::endl;
		std::cout << *berry << std::endl;
		john->signForm(*berry);
		std::cout << *berry << std::endl;
		john->executeForm(*berry);

		std::cout << "---------------------------------------------" << std::endl;

		yuki = new Bureaucrat("Yuki", 42);
		clapTrap = new RobotomyRequestForm("Towel");

		std::cout << *yuki << std::endl;
		std::cout << *clapTrap << std::endl;
		yuki->signForm(*clapTrap);
		std::cout << *clapTrap << std::endl;
		yuki->executeForm(*clapTrap);

		std::cout << "---------------------------------------------" << std::endl;

		verso = new Bureaucrat("Verso", 5);
		expedition33 = new PresidentialPardonForm("Renoir");

		std::cout << *verso << std::endl;
		std::cout << *expedition33 << std::endl;
		verso->signForm(*expedition33);
		std::cout << *expedition33 << std::endl;
		verso->executeForm(*expedition33);

		std::cout << std::endl;
	}
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }

	delete john;
	delete berry;
	delete yuki;
	delete clapTrap;
	delete verso;
	delete expedition33;
	return 0;
}
