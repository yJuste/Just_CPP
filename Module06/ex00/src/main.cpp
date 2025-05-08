// ************************************************************************** //
//                                                                            //
//                main.cpp                                                    //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "main.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Display something to convert in : ";
		std::cerr << "\033[91m" << argv[0] << " [number/character]" << "\033[0m" << std::endl;
		return 1;
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}
