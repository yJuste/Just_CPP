// ************************************************************************** //
//                                                                            //
//                Span.cpp                                                    //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Span.class.h"

// ~structor

Span::Span() {}
Span::~Span() {}

Span::Span( const Span & s ) { *this = s; }
Span::Span( unsigned int n ) : _n( n ), _tab( 0 ) { _tab.reserve(_n); }

// Operator Overload

Span	&Span::operator = ( const Span & s ) { (void)s; return *this; }

std::ostream	&operator << ( std::ostream & o, const Span & s ) { (void)s; return o << " Operator Span. " << std::endl; }

// Member function

void	Span::addNumber( int n )
{
	if (_tab.size() >= _n)
		throw Exception();
	_tab.push_back(n);
}

int	Span::shortestSpan() const
{
	if (_tab.size() < 2)
		throw Exception();

	int			shortest;
	unsigned int		size = _tab.size() - 1;

	shortest = std::abs(_tab.at(0) - _tab.at(1));
	for (unsigned int i = 1; i < size; ++i)
	{
		int tmp = std::abs(_tab.at(i) - _tab.at(i + 1));
		if (tmp < shortest)
			shortest = tmp;
	}
	return shortest;
}

int	Span::longestSpan() const
{
	if (_tab.size() < 2)
		throw Exception();

	int			longest;
	unsigned int		size = _tab.size() - 1;

	longest = std::abs(_tab.at(0) - _tab.at(1));
	for (unsigned int i = 1; i < size; ++i)
	{
		int tmp = std::abs(_tab.at(i) - _tab.at(i + 1));
		if (tmp > longest)
			longest = tmp;
	}
	return longest;
}
