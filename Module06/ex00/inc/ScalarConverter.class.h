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

		class Exception;
};

std::ostream & operator << ( std::ostream &, const ScalarConverter & );

// Exception

class	ScalarConverter::Exception : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Error"; }
};

#endif
