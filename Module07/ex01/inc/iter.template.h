// ************************************************************************** //
//                                                                            //
//                iter.template.h                                             //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef ITER_TEMPLATE_H
# define ITER_TEMPLATE_H

// ************************************************************************** //
//                                  Templates                                 //
// ************************************************************************** //

template <typename T, typename F>

void	iter( T * arr, int len, F f )			// iter
{
	for (int i = 0; i < len; ++i)
		f(arr[i]);
}

template <typename T>

void	add5( T & a )					// add5
{
	a += 5;
}

#endif
