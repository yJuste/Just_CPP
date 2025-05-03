// ************************************************************************** //
//                                                                            //
//                main.cpp                                                    //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "main.h"

// ----------------------PROTOTYPE----------------------
int		errors( std::string executable, int i );
bool		strToFloat( std::string s, float & n );
// -----------------------------------------------------

int	main(int argc, char **argv)
{
	if (argc != 3)
		return errors(argv[0], 1);

	float		point_x;
	float		point_y;

	std::stringstream	ss1(argv[1]);
	std::stringstream	ss2(argv[2]);

	if (!(ss1 >> point_x))
		return errors(argv[0], 2);
	if (!(ss2 >> point_y))
		return errors(argv[0], 2);

	Point		a( -1.0f, -1.0f );
	Point		b( 0.0f, 2.0f );
	Point		c( 2.0f, -2.0f );
	Point		point( point_x, point_y );

	std::cout << "Le point donné: " << "P( " << point_x << " ; " << point_y << " )" << std::endl;
	std::cout << "\033[33m";
	std::cout << "----------Les trois points de base:----------" << std::endl;
	std::cout << "  Point A: " << a << std::endl;
	std::cout << "  Point B: " << b << std::endl;
	std::cout << "  Point C: " << c << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "\033[0m" << std::endl;

	if (bsp(a, b, c, point))
		std::cout << "--- Le point fait parti du triangle ABC 🥳 --" << std::endl;
	else
		std::cout << "Le point ne fait pas parti du triangle ABC 😬" << std::endl;
	return 0;
}

int	errors( std::string executable, int i )
{
	if (i == 1)
		std::cout << executable.substr(2) << ": " << "\033[31m" << "error" << "\033[0m" << ": Too many/few arguments: " << "./bsp [point_x] [point_y]" << std::endl;
	else if (i == 2)
		std::cout << executable.substr(2) << ": " << "\033[31m" << "error" << "\033[0m" << ": Conversion error: " << "The number is not a float." << std::endl;
	return i;
}
