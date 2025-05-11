// ************************************************************************** //
//                                                                            //
//                MutantStack.class.h                                         //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef MUTANTSTACK_CLASS_H
# define MUTANTSTACK_CLASS_H

// Standard Libraries

# include <iostream>

// ************************************************************************** //
//                             MutantStack Class                              //
// ************************************************************************** //

class	MutantStack
{
	private:

	public:

		MutantStack();
		~MutantStack();

		MutantStack( const MutantStack & );

		MutantStack & operator = ( const MutantStack & );

		class Exception;
};

std::ostream & operator << ( std::ostream &, const MutantStack & );

// Exception

class	MutantStack::Exception : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Exception MutantStack"; }
};

#endif
