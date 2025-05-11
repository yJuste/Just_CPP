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

	std::cout << "Test sur une dizaine de milliers de chiffres: " << std::endl;
	try
	{
		Span		rangeMoi(10000);

		std::srand(time(NULL));
		for (int i = 0; i < 10000; ++i)
			rangeMoi.addNumber(rand());
		std::cout << rangeMoi.shortestSpan() << std::endl;
		std::cout << rangeMoi.longestSpan() << std::endl;
	}
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }
	std::cout << std::endl;
	std::cout << "Test manuel: " << std::endl;
	try
	{
		Span		eclair(10);

		eclair.addNumber(-5);
		eclair.addNumber(-30);
		eclair.addNumber(-2);
		eclair.addNumber(0);
		eclair.addNumber(34);
		eclair.addNumber(13);
		eclair.addNumber(0);
		eclair.addNumber(0);
		eclair.addNumber(-1);

		std::cout << eclair.shortestSpan() << std::endl;
		std::cout << eclair.longestSpan() << std::endl;
	}
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }
	std::cout << std::endl;
	std::cout << "Test donné de 42: " << std::endl;
	try
	{
		Span	sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }
	return 0;
}
