// ************************************************************************** //
//                                                                            //
//                main.cpp                                                    //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "main.h"

# ifndef MAX
#  define MAX 1000000
# endif

int	main(void)
{

	std::cout << "Test sur une dizaine de milliers de chiffres: " << std::endl;
	try
	{
		Span		rangeMoi(MAX);

		std::srand(time(NULL));
		for (int i = 0; i < MAX; ++i)
			rangeMoi.addNumber(rand());
		std::cout << rangeMoi.shortestSpan() << std::endl;
		std::cout << rangeMoi.longestSpan() << std::endl;
	}
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }
	std::cout << std::endl;
	std::cout << "Test manuel: " << std::endl;
	try
	{
		Span		eclair(4);

		eclair.addNumber(5);
		eclair.addNumber(30);
		eclair.addNumber(-2);
		eclair.addNumber(0);

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
	std::cout << std::endl;
	std::cout << "Test des iterators: " << std::endl;
	try
	{
		Span			amazing(10);
		std::vector<int>	tab(5, 100);

		amazing.addNumber(2);
		amazing.addNumber(4);
		amazing.addNumber(6);
		amazing.addNumber(8);
		amazing.addNumber(10);

		amazing.iterate(tab.begin(), tab.end());

		std::cout << amazing.shortestSpan() << std::endl;
		std::cout << amazing.longestSpan() << std::endl;
	}
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }
	return 0;
}
