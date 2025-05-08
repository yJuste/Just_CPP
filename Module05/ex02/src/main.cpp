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
	AForm		* berry = NULL;
	Bureaucrat	* john = NULL;

	try
	{
		berry = new ShrubberyCreationForm("Berry Contract");
		john = new Bureaucrat("John", 145);

		std::cout << *berry << std::endl;
		john->signForm(*berry);
		std::cout << *berry << std::endl;
		berry->beSigned(*john);
		berry->execute(*john);
		std::cout << *berry << std::endl;
	}
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }

	delete berry;
	delete john;
	return 0;
}
