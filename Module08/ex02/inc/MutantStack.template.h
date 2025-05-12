// ************************************************************************** //
//                                                                            //
//                MutantStack.template.h                                      //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef MUTANTSTACK_TEMPLATE_H
# define MUTANTSTACK_TEMPLATE_H

// Standard Libraries

# include <stack>
# include <deque>
# include <list>

// ************************************************************************** //
//                           MutantStack Template                             //
// ************************************************************************** //

template <typename T, typename Container = std::deque<T> >

class	MutantStack : public std::stack<T, Container>
{
	public:

		MutantStack();
		~MutantStack();

		MutantStack( const MutantStack & );

		MutantStack & operator = ( const MutantStack & );

		// Iterators

		typedef typename Container::iterator iterator;
		typedef typename Container::reverse_iterator reverse_iterator;

		iterator begin();
		iterator end();

		reverse_iterator rbegin();
		reverse_iterator rend();

		class Exception;
};

// Exception

template <typename T, typename C>

class	MutantStack<T, C>::Exception : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Exception MutantStack"; }
};

#endif
