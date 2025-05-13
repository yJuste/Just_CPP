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
		throw ParsingException();

	std::stringstream		ss(operation);
	std::string			sub;

	while (ss >> sub)
	{
		if (std::string("+-*/").find(sub[0]) != std::string::npos)
		{
			if (_operate.size() < 2)
				throw TooFewNumbersException();

			float			first;
			float			second;

			second = _operate.top();
			_operate.pop();
			first = _operate.top();
			_operate.pop();

			float			res;

			if (sub == "+")
				res = first + second;
			else if (sub == "-")
				res = first - second;
			else if (sub == "*")
				res = first * second;
			else if (sub == "/")
			{
				if (second == 0)
					throw DivisionByZeroException();
				res = first / second;
			}
			_operate.push(res);
		}
		else
		{
			std::stringstream		ss2(sub);
			float				n;

			ss2 >> n;
			_operate.push(n);
		}
	}
	if (_operate.size() > 1)
		throw NoResultFoundException();
	std::cout << _operate.top() << std::endl;
}

// Private

bool	RPN::parseRpn( const std::string & s ) const
{
	std::stringstream		ss(s);
	std::string			sub;

	while (ss >> sub)
	{
		if (sub.length() == 1 && std::string("+-*/").find(sub[0]) != std::string::npos)
			continue ;

		std::stringstream		ss2(sub);
		float				n;

		if (!(ss2 >> n))
			return false;

		if (n > 10 || n < -10)
			return false;
	}
	return true;
}

void	RPN::printStack( std::stack<float> stack ) const
{
	int		i = 0;

	while (!stack.empty())
	{
		std::cout << i << " : " << stack.top() << std::endl;
		stack.pop();
		++i;
	}
}
