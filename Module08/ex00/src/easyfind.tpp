// ************************************************************************** //
//                                                                            //
//                easyfind.tpp                                                //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "easyfind.template.h"

template <typename T>

typename T::iterator	easyfind( T & t, int to_find )
{
	typename T::iterator	it = t.begin();
	typename T::iterator	ite = t.end();

	for (; it != ite; it++)
	{
		if (*it == to_find)
			return it;
	}
	std::cout << "Your number " << to_find << " was not found." << std::endl;
	throw std::logic_error("\033[93measyfind error.\033[0m");
}
