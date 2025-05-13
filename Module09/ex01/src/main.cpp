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
		std::cerr << "/RPN [operation]" << std::endl;
		return 1;
	}
	try
	{
		RPN		rpn;

		rpn.rpn(argv[1]);
	}
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; return 1; }
	return 0;
}
