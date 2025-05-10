// ************************************************************************** //
//                                                                            //
//                whatever.template.h                                         //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef WHATEVER_TEMPLATE_H
# define WHATEVER_TEMPLATE_H

// ************************************************************************** //
//                                  Templates                                 //
// ************************************************************************** //

template <typename T>

void	swap( T & a, T & b )				// swap
{
	T	c;

	c = a;
	a = b;
	b = c;
}

template <typename T>

const T & min( const T & a, const T & b )		// min
{
	return a <= b ? a : b;
}

template <typename T>

const T & max( const T & a, const T & b )		// max
{
	return a <= b ? b : a;
}

#endif
