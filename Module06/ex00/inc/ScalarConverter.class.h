// ************************************************************************** //
//                                                                            //
//                ScalarConverter.class.h                                     //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef SCALARCONVERTER_CLASS_H
# define SCALARCONVERTER_CLASS_H

// Standard Libraries

# include <iostream>
# include <sstream>
# include <cmath>
# include <iomanip>

// ************************************************************************** //
//                           ScalarConverter Class                            //
// ************************************************************************** //

class	ScalarConverter
{
	private:

		ScalarConverter();

		ScalarConverter( const ScalarConverter & );
		ScalarConverter & operator = ( const ScalarConverter & );

	public:

		~ScalarConverter();

		static void convert( const std::string & );

		static char toChar( const std::string & );
		static int toInt( const std::string & );
		static float toFloat( const std::string & );
		static double toDouble( const std::string & );

		class Exception; // Prototypage
		class ConversionException;
		class NotPrintableException;
};

std::ostream & operator << ( std::ostream &, const ScalarConverter & );

// Exception

class	ScalarConverter::Exception : public std::exception
{
	public: const char * what() const throw() { return "\033[91merror\033[0m: Error"; }
};

class	ScalarConverter::ConversionException : public std::exception
{
	public: const char * what() const throw() { return "\033[91mConversion Failed\033[0m"; }
};

class	ScalarConverter::NotPrintableException : public std::exception
{
	public: const char * what() const throw() { return "\033[91mNot Printable\033[0m"; }
};

#endif
