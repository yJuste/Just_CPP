// ************************************************************************** //
//                                                                            //
//                Span.class.h                                                //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef SPAN_CLASS_H
# define SPAN_CLASS_H

// Standard Libraries

# include <iostream>

// ************************************************************************** //
//                                 Span Class                                 //
// ************************************************************************** //

class	Span
{
	private:

		unsigned int		_n;
		std::vector<int>	_tab;

		Span();

	public:

		~Span();

		Span( const Span & );
		Span( unsigned int );

		Span & operator = ( const Span & );

		void addNumber( int );
		int shortestSpan() const;
		int longestSpan() const;

		class Exception;
};

std::ostream & operator << ( std::ostream &, const Span & );

// Exception

class	Span::Exception : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Exception Span"; }
};

#endif
