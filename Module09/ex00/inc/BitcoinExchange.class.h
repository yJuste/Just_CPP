// ************************************************************************** //
//                                                                            //
//                BitcoinExchange.class.h                                     //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef BITCOINEXCHANGE_CLASS_H
# define BITCOINEXCHANGE_CLASS_H

// Standard Libraries

# include <iostream>

// ************************************************************************** //
//                            BitcoinExchange Class                           //
// ************************************************************************** //

class	BitcoinExchange
{
	public:

		BitcoinExchange();
		~BitcoinExchange();

		BitcoinExchange( const BitcoinExchange & );

		BitcoinExchange & operator = ( const BitcoinExchange & );

		class Exception;
};

std::ostream & operator << ( std::ostream &, const BitcoinExchange & );

// Exception

class	BitcoinExchange::Exception : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Exception BitcoinExchange"; }
};

#endif
