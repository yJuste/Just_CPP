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

// ************************************************************************** //
//                                   RPN Class                                //
// ************************************************************************** //

class	RPN
{
	public:

		RPN();
		~RPN();

		RPN( const RPN & );

		RPN & operator = ( const RPN & );

		class Exception;
};

std::ostream & operator << ( std::ostream &, const RPN & );

// Exception

class	RPN::Exception : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Exception RPN"; }
};

#endif
