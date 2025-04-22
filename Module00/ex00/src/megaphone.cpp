// ************************************************************************** //
//                                                                            //
//                megaphone.cpp                                               //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "megaphone.h"

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (j == 0)
			{
				while (argv[i][j] == ' ')
					j++;
				if (!argv[i][j])
					break;
			}
			std::cout << (char)std::toupper(argv[i][j]);
			j++;
			k = j;
			while (argv[i][j] == ' ')
				j++;
			if (!argv[i][j])
				break ;
			else
				j = k;
		}
		if (i != argc - 1)
			std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}
