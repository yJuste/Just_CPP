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

	throw std::logic_error("easyfind: nothing was found.");
}
