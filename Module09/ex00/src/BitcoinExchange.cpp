// ************************************************************************** //
//                                                                            //
//                BitcoinExchange.cpp                                         //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "BitcoinExchange.class.h"

// ~Structor

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & b ) { *this = b; }

// Operator Overload

BitcoinExchange	&BitcoinExchange::operator = ( const BitcoinExchange & b ) { (void)b; return *this; }

std::ostream	&operator << ( std::ostream & o, const BitcoinExchange & b ) { (void)b; return o << "BitcoinExchange Operator <<"; }

// Methode

void	BitcoinExchange::parseExchangeRateFile( const std::string & filename )
{
	try
	{
		std::ifstream		infile;

		infile.open(filename, std::ifstream::binary);
		if (!infile.is_open())
			throw Exception();

		std::string		line;

		std::getline(infile, line);

		while (std::getline(infile, line))
		{
			std::stringstream	ss(line);
			std::string		date;
			std::string		rate;
	
			if (!std::getline(ss, date, ',') || !std::getline(ss, rate, '\n'))
				throw Exception();
			_exchangeRate[date] = std::stof(rate);
		}
	}
	catch ( std::exception & e ) { std::cerr << e.what() << std::endl; }
}

void	BitcoinExchange::printExchangeRate() const
{
	std::map<std::string, float>::const_iterator		it;

	for (it = _exchangeRate.begin(); it != _exchangeRate.end(); ++it)
		std::cout << it->first << "," << it->second << std::endl;
}

// bool valideDate
// bool validFloat
