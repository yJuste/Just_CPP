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

		std::multimap<std::string, float>	_exchangeRate;

		void printDB() const;

		void processLine( const std::string & ) const;

		bool validDate( const std::string & ) const;
		bool regexDate( const std::string & ) const;

		std::string trim( const std::string & ) const;

	public:

		BitcoinExchange();
		~BitcoinExchange();

		BitcoinExchange( const BitcoinExchange & );

		BitcoinExchange & operator = ( const BitcoinExchange & );

		void parseDB( const std::string & );
		void displayRate( const std::string & ) const;

		class BadDBException;
};

std::ostream & operator << ( std::ostream &, const BitcoinExchange & );

// Exception

class	BitcoinExchange::BadDBException : public std::exception
{
	public: const char * what() const throw() { return "\033[31merror\033[0m: Bad DataBase Exception: Parsing is not good"; }
};

#endif
