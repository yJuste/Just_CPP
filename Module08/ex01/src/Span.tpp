// ************************************************************************** //
//                                                                            //
//                Span.tpp                                                    //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "Span.class.h"

template <typename T>				// iterate ( begin, end )

void	Span::iterate( T begin, T end )
{
	int		distance;

	distance = std::distance(begin, end);
	if (_tab.size() + distance > _n)
		throw Span::Exception();
	_tab.insert(_tab.end(), begin, end);
}
