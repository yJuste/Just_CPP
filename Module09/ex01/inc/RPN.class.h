// ************************************************************************** //
//                                                                            //
//                RPN.class.h                                                 //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef RPN_CLASS_H
# define RPN_CLASS_H

// Standard Libraries

# include <iostream>
# include <stack>
# include <sstream>
# include <algorithm>

// ************************************************************************** //
//                                   RPN Class                                //
// ************************************************************************** //

class	RPN
{
	private:

		std::stack<float>		_operate;

		bool parseRpn( const std::string & ) const;
		void printStack( std::stack<float> ) const;

	public:

		RPN();
		~RPN();

		RPN( const RPN & );

		RPN & operator = ( const RPN & );

		void rpn( const std::string & );

		class Exception;
		class ParsingException;
		class DivisionByZeroException;
		class TooFewNumbersException;
		class NoResultFoundException;
};

std::ostream & operator << ( std::ostream &, const RPN & );

// Exception

class	RPN::Exception : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Exception RPN"; }
};

class	RPN::ParsingException : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Error during the parsing."; }
};

class	RPN::DivisionByZeroException : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Division by zero is forbidden."; }
};

class	RPN::TooFewNumbersException : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Arithmetic operation used while there are no numbers enough in the stack."; }
};

class	RPN::NoResultFoundException : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: No result found because too many numbers in the stack."; }
};

#endif
