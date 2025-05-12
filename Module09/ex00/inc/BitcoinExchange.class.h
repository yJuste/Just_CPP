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
# include <map>
# include <string>
# include <fstream>
# include <sstream>
# include <ctime>
# include <cstdlib>

// ************************************************************************** //
//                            BitcoinExchange Class                           //
// ************************************************************************** //

class	BitcoinExchange
{
	private:

		std::map<std::string, float>		_exchangeRate;

	public:

		BitcoinExchange();
		~BitcoinExchange();

		BitcoinExchange( const BitcoinExchange & );

		BitcoinExchange & operator = ( const BitcoinExchange & );

		void parseExchangeRateFile( const std::string & );
		void printExchangeRate() const;
		static bool validDate( const std::string & );
		static bool regexDate( const std::string & );

		class Exception;
};

std::ostream & operator << ( std::ostream &, const BitcoinExchange & );

// Exception

class	BitcoinExchange::Exception : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Exception BitcoinExchange"; }
};

#endif
