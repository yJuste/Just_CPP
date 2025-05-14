// ************************************************************************** //
//                                                                            //
//                PmergeMe.class.h                                            //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef PMERGEME_CLASS_H
# define PMERGEME_CLASS_H

// Standard Libraries

# include <iostream>
# include <sstream>
# include <vector>
# include <list>
# include <ctime>
# include <iomanip>

// ************************************************************************** //
//                                PmergeMe Class                              //
// ************************************************************************** //

class	PmergeMe
{
	private:

		std::vector<int>		_vtab;
		std::list<int>			_ltab;

		void _algorithmFordJohnson( std::vector<int> & );
		void _algorithmFordJohnson( std::list<int> & );

		void _insertion_sort( std::vector<int> & );
		void _insertion_sort( std::list<int> & );

		void _printLTab() const;
		void _printVTab() const;

	public:

		PmergeMe();
		~PmergeMe();

		PmergeMe( const PmergeMe & );

		PmergeMe & operator = ( const PmergeMe & );

		void mergeMe( const char ** );

		class Exception;
};

std::ostream & operator << ( std::ostream &, const PmergeMe & );

// Exception

class	PmergeMe::Exception : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Exception PmergeMe"; }
};

#endif
