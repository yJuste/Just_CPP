// ************************************************************************** //
//                                                                            //
//                main.cpp                                                    //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "main.h"

// Pour lancer des nombres aléatoires:
// Sur MACOS:
//	./PmergeMe `jot -r 3000 1 100000 | tr '\n' ' '`
// Sur Linux:
//	./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cerr << "./PmergeMe [nb [nb] ..." << std::endl;
		return 1;
	}
	try
	{
		PmergeMe		pm;

		pm.mergeMe(const_cast<const char **>(argv + 1));
	}
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; return 1; }
	return 0;
}
