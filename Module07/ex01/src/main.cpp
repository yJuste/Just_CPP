// ************************************************************************** //
//                                                                            //
//                main.cpp                                                    //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "main.h"

void	addILoveYou( std::string & );

int	main(void)
{
	int		tab[] = {10, 20, 30, 40, 50};

	for (int i = 0; i < 5; ++i)
		std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
	std::cout << std::endl;
	::iter(tab, 5, ::add5<int>);
	for (int i = 0; i < 5; ++i)
		std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
	std::cout << "--------------------------------------------------" << std::endl;

	std::string	arr[] = {"hey babe", "how", "are you ?"};
	int		len = sizeof(arr) / sizeof(*arr);

	for (int i = 0; i < len; ++i)
		std::cout << "tab[" << i << "] = " << arr[i] << std::endl;
	std::cout << std::endl;
	::iter(arr, len, ::addILoveYou);
	for (int i = 0; i < len; ++i)
		std::cout << "tab[" << i << "] = " << arr[i] << std::endl;
	return 0;
}

void	addILoveYou( std::string & a )
{
	a += " I LOVE YOU!!!! ❤️ ❤️ ❤️ ";
}
