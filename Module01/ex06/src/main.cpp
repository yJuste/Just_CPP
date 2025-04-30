// ************************************************************************** //
//                                                                            //
//                main.cpp                                                    //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "main.h"

int	main(int argc, char **argv)
{
	Harl		automaton;

	if (argc != 2)
	{
		std::cout << std::string(argv[0]).substr(2) << ": " << "\033[31m" << "error" << "\033[0m" << ": " << "too many/few arguments" << std::endl;
		return 1;
	}
	automaton.complain(argv[1]);
	return 0;
}
