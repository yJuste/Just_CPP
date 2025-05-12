// ************************************************************************** //
//                                                                            //
//                ScalarConverter.cpp                                         //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "ScalarConverter.class.h"

// ~Structor

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter( const ScalarConverter & b ) { *this = b; }

// Operator Overload

ScalarConverter	&ScalarConverter::operator = ( const ScalarConverter & b ) { (void)b; return *this; }

std::ostream	&operator << ( std::ostream & o, const ScalarConverter & b ) { (void)b; return o << "Operator <<" << std::endl; }

// Member functions

// For just 1 precision for everything: ... << std::fixed << std::setprecision(1) << ...
void	ScalarConverter::convert( const std::string & s )
{
	std::cout << "The conversion of: " << "\033[32m" << s << "\033[0m" << std::endl << std::endl;
	try { std::cout << "Char\t: " << toChar(s) << "'" << std::endl; }
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }
	try { std::cout << "Int\t: " << toInt(s) << std::endl; }
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }
	try { std::cout << "Float\t: " << toFloat(s) << "f" << std::endl; }
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }
	try { std::cout << "Double\t: " << toDouble(s) << std::endl; }
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }
}

char	ScalarConverter::toChar( const std::string & s )
{
	int			n = 0;
	char			c = 0;
	std::stringstream	ss(s);

	if (s.length() == 1 && std::isprint(static_cast<unsigned int>(s[0])) && !std::isdigit(s[0]))
	{
		std::cout << "'";
		return s[0];
	}
	if (!(ss >> n) || !(n >= 0 && n <= 128))
		throw ConversionException();
	c = static_cast<char>(n);
	if (!std::isprint(c))
		throw NotPrintableException();
	std::cout << "'";
	return c;
}

int	ScalarConverter::toInt( const std::string & s )
{
	int			n = 0;
	std::stringstream	ss(s);

	if (!(ss >> n))
		throw ConversionException();
	return n;
}

double	ScalarConverter::toDouble( const std::string & s )
{
	if (s == "nan")
		return std::numeric_limits<double>::quiet_NaN();
	else if (s == "+inf")
		return std::numeric_limits<double>::infinity();
	else if (s == "-inf")
		return -std::numeric_limits<double>::infinity();

	std::string		res = s;

	if (s.at(s.length() - 1) == 'f')
		res = s.substr(0, s.length() - 1);

	double			n = 0.0;
	std::stringstream	ss(res);

	if (!(ss >> n))
		throw ConversionException();
	return n;
}

float	ScalarConverter::toFloat( const std::string & s )
{
	if (s == "nan")
		return std::numeric_limits<float>::quiet_NaN();
	else if (s == "+inf")
		return std::numeric_limits<float>::infinity();
	else if (s == "-inf")
		return -std::numeric_limits<float>::infinity();

	std::string		res = s;

	if (s.at(s.length() - 1) == 'f')
		res = s.substr(0, s.length() - 1);

	float			n = 0.0f;
	std::stringstream	ss(res);

	if (!(ss >> n))
		throw ConversionException();
	return n;
}
