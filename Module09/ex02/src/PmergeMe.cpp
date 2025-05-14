// ************************************************************************** //
//                                                                            //
//                PmergeMe.cpp                                                //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "PmergeMe.class.h"

// ~Structor

PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe( const PmergeMe & r ) { *this = r; }

// Operator Overload

PmergeMe	&PmergeMe::operator = ( const PmergeMe & p ) { (void)p; return *this; }

std::ostream	&operator << ( std::ostream & o, const PmergeMe & p ) { (void)p; return o << "PmergeMe Operator <<"; }

// Member function

void	PmergeMe::mergeMe( const char **argv )
{
	for (int i = 0; argv[i]; ++i)
	{
		std::stringstream		ss(argv[i]);
		int				n;

		if (!(ss >> n))
			throw Exception();

		if (n < 0)
			throw Exception();

		_vtab.push_back(n);
		_ltab.push_back(n);
	}

	std::cout << "Before:   "; _printVTab(); std::cout << std::endl;

	clock_t			vstart, lstart;
	clock_t			vend, lend;

	vstart = clock();
	_algorithmFordJohnson(_vtab);
	vend = clock();

	lstart = clock();
	_algorithmFordJohnson(_ltab);
	lend = clock();

	std::cout << "After:    "; _printVTab(); std::cout << std::endl;

	std::cout << "Time to process a range of " << "\033[32m" << _vtab.size() << "\033[0m" << " elements with std::vector :  " << "\033[32m" << static_cast<double>(vend - vstart) * 1e3 / CLOCKS_PER_SEC << "\033[0m" << " ms" << std::endl;

	std::cout << "Time to process a range of " << "\033[32m" << _vtab.size() << "\033[0m" << " elements with std::list :    " << "\033[32m" << static_cast<double>(lend - lstart) * 1e3 / CLOCKS_PER_SEC << "\033[0m" << " ms" << std::endl;


}

// Private

void	PmergeMe::_algorithmFordJohnson( std::vector<int> & v )
{
	if (v.size() <= 1)
		return ;

	std::vector<int>		main_chain;
	std::vector<int>		pend_chain;

	for (size_t i = 0; i + 1 < v.size(); i += 2)
	{
		int		a = v[i];
		int		b = v[i + 1];

		if (a < b)
			std::swap(a, b);

		main_chain.push_back(a);
		pend_chain.push_back(b);
	}

	if (v.size() % 2 != 0)
		pend_chain.push_back(v.back());

	_insertion_sort(main_chain);

	for (size_t i = 0; i < pend_chain.size(); ++i)
	{
		std::vector<int>::iterator		it;

		it = std::lower_bound(main_chain.begin(), main_chain.end(), pend_chain[i]);
		main_chain.insert(it, pend_chain[i]);
	}
	v = main_chain;
}

void	PmergeMe::_algorithmFordJohnson( std::list<int> & l )
{
	if (l.size() <= 1)
		return ;

	std::list<int>			main_chain;
	std::list<int>			pend_chain;

	std::list<int>::iterator	it = l.begin();

	while (it != l.end())
	{
		int		a = *it++;

		if (it != l.end())
		{
			int		b = *it++;

			if (a < b)
				std::swap(a, b);

			main_chain.push_back(a);
			pend_chain.push_back(b);
		}
		else
			pend_chain.push_back(a);
	}

	_insertion_sort(main_chain);

	for (std::list<int>::iterator	pit = pend_chain.begin(); pit != pend_chain.end(); ++pit)
	{
		std::list<int>::iterator	it;

		it = std::lower_bound(main_chain.begin(), main_chain.end(), *pit);
		main_chain.insert(it, *pit);
	}
	l = main_chain;
}

void	PmergeMe::_insertion_sort( std::vector<int> & v )
{
	int		n = v.size();

	for (int i = 1; i < n; ++i)
	{
		int	key = v[i];
		int	j = i - 1;

		while (j >= 0 && v[j] > key)
		{
			v[j + 1] = v[j];
			j--;
		}
		v[j + 1] = key;
	}
}

void	PmergeMe::_insertion_sort( std::list<int> & l )
{
	std::list<int>		sort;

	while (!l.empty())
	{
		int	key = l.front();
		l.pop_front();

		std::list<int>::iterator	it = sort.begin();
		while (it != sort.end() && *it < key)
			++it;
		sort.insert(it, key);
	}
	l = sort;
}

void	PmergeMe::_printVTab() const
{
	for (size_t i = 0; i < _vtab.size(); ++i)
	{
		std::cout << _vtab[i];
		if (i != _vtab.size() - 1)
			std::cout << " ";
	}
}

void	PmergeMe::_printLTab() const
{
	for (std::list<int>::const_iterator it = _ltab.begin(); it != _ltab.end(); ++it)
	{
		std::cout << *it;
		if (std::next(it) != _ltab.end())
			std::cout << " ";
	}
}
