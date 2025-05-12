// ************************************************************************** //
//                                                                            //
//                MutantStack.tpp                                             //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "MutantStack.template.h"

// ~structor

template <typename T, typename C> MutantStack<T, C>::MutantStack() : std::stack<T, C>() {}
template <typename T, typename C> MutantStack<T, C>::~MutantStack() {}

template <typename T, typename C> MutantStack<T, C>::MutantStack( const MutantStack<T, C> & t ) : std::stack<T, C>(t) { *this = t; }

// Operator Overload

template <typename T, typename C> MutantStack<T, C> & MutantStack<T, C>::operator = ( const MutantStack<T, C> & t )
{
	if (this != &t)
		std::stack<T, C>::operator = (t);
	return *this;
}

// Iterators

template <typename T, typename C> typename C::iterator MutantStack<T, C>::begin() { return this->c.begin(); }
template <typename T, typename C> typename C::iterator MutantStack<T, C>::end() { return this->c.end(); }

template <typename T, typename C> typename C::reverse_iterator MutantStack<T, C>::rbegin() { return this->c.rbegin(); }
template <typename T, typename C> typename C::reverse_iterator MutantStack<T, C>::rend() { return this->c.rend(); }
