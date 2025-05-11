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
	std::list<int>			myHeight;
	std::list<int>::iterator 	it;

	for (int i = 0; i < 9; ++i)
		myHeight.push_back(160 + i);

	it = myHeight.begin();
	for (; it != myHeight.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << std::endl;
	{
		try { it = easyfind(myHeight, 120); }
		catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }
	}
	std::cout << std::endl;
	{
		try
		{
			it = easyfind(myHeight, 168);
			std::cout << *it << " was found!" << std::endl;
		}
		catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }
	}
	return 0;
}
