// ************************************************************************** //
//                                                                            //
//                RPN.cpp                                                     //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "RPN.class.h"

// ~Structor

RPN::RPN() {}
RPN::~RPN() {}

RPN::RPN( const RPN & r ) { *this = r; }

// Operator Overload

RPN	&RPN::operator = ( const RPN & r ) { (void)r; return *this; }

std::ostream	&operator << ( std::ostream & o, const RPN & r ) { (void)r; return o << "RPN Operator <<"; }

// Member function

void	RPN::rpn( const std::string & operation )
{
	if (!parseRpn(operation))
		throw Exception();
	return ;
}

bool	RPN::parseRpn( const std::string & s )
{
	for (int i = 0; i < static_cast<int>(s.length()); ++i)
	{
		while (s[i] == ' ')
			i++;
		std::string sub = s.substr(i, s.find(' ', i) - i);
		std::cout << ":" << sub << ":" << std::endl;
	}
	return true;
}
