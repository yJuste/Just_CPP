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

BitcoinExchange	&BitcoinExchange::operator = ( const BitcoinExchange & b )
{
	if (this != &b)
		_exchangeRate = b._exchangeRate;
	return *this;
}

std::ostream	&operator << ( std::ostream & o, const BitcoinExchange & b ) { (void)b; return o << "BitcoinExchange Operator <<"; }

// Methode

void	BitcoinExchange::parseDB( const std::string & filename )
{
	std::ifstream		infile;

	infile.open(filename.c_str(), std::ifstream::binary);
	if (!infile.is_open())
		{ infile.close(); throw BadDBException(); }

	std::string		line;

	std::getline(infile, line);

	while (std::getline(infile, line))
	{
		std::stringstream	ss1(line);
		std::string		date;
		std::string		value;

		if (!std::getline(ss1, date, ',') || !std::getline(ss1, value))
			{ infile.close(); throw BadDBException(); }

		date = _trim(date);
		value = _trim(value);

		if (!_validDate(date))
			{ infile.close(); throw BadDBException(); }

		std::stringstream	ss2(value);
		float			val;

		if (!(ss2 >> val) || val < 0)
			{ infile.close(); throw BadDBException(); }

		_exchangeRate.insert(std::pair<std::string, float>(date, val));
	}
	infile.close();
	//printBD();
}

void	BitcoinExchange::displayRate( const std::string & filename ) const
{
	std::ifstream		infile;

	infile.open(filename.c_str(), std::ifstream::binary);
	if (!infile.is_open())
		throw std::logic_error("Error: could not open file.");

	std::string		line;

	std::getline(infile, line);

	while (std::getline(infile, line))
		_processLine(line);
	infile.close();
}

// Private

void	BitcoinExchange::_printDB() const
{
	std::multimap<std::string, float>::const_iterator		it;

	for (it = _exchangeRate.begin(); it != _exchangeRate.end(); ++it)
		std::cout << it->first << "," << it->second << std::endl;
}

void	BitcoinExchange::_processLine( const std::string & line ) const
{
	std::stringstream	ss1(line);
	std::string		date;
	std::string		value;

	if (!std::getline(ss1, date, '|') || !std::getline(ss1, value))
		return (void)(std::cerr << "Error: bad input => " << line << std::endl);

	date = _trim(date);
	value = _trim(value);

	if (!_validDate(date))
		return (void)(std::cerr << "Error: bad input => " << line << std::endl);

	std::stringstream	ss2(value);
	float			val;

	if (!(ss2 >> val))
		return (void)(std::cerr << "Error: bad input => " << line << std::endl);

	if (val < 0)
		return (void)(std::cerr << "Error: not a positive number." << std::endl);
	if (val > 1000)
		return (void)(std::cerr << "Error: too large a number." << std::endl);

	std::multimap<std::string, float>::const_iterator	it;

	it = _exchangeRate.lower_bound(date);

	if (it == _exchangeRate.end() || it->first != date)
	{
		if (it != _exchangeRate.begin())
			--it;
		else
			return (void)(std::cerr << "Error: no exchange rate data available." << std::endl);
	}

	float		rate = it->second;

	std::cout << date << " => " << val << " = " << (val * rate) << std::endl;
}

bool	BitcoinExchange::_validDate( const std::string & date ) const
{
	if (!_regexDate(date))
		return false;

	int			year;
	int			month;
	int			day;

	try
	{
		year = std::atoi(date.substr(0, 4).c_str());
		month = std::atoi(date.substr(5, 2).c_str());
		day = std::atoi(date.substr(8, 2).c_str());
	}
	catch (...) { return false; }

	int	daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (month < 1 || month > 12 || day < 1 || day > 31)
		return false;
	if (day > daysInMonth[month - 1])
		return false;

	time_t			now = std::time(0);
	tm			*lm = std::localtime(&now);

	int			cYear = 1900 + lm->tm_year;
	int			cMonth = 1 + lm->tm_mon;
	int			cDay = lm->tm_mday;

	if (year > cYear || (year == cYear && month > cMonth)
		|| (year == cYear && month == cMonth && day > cDay))
		return false;

	return true;
}

bool	BitcoinExchange::_regexDate( const std::string & date ) const
{
	if (date.length() != 10)
		return false;

	for (int i = 0; i < 10; ++i)
	{
		if (((i != 4 && i != 7) && !std::isdigit(date.at(i)))
			|| ((i == 4 || i == 7) && date.at(i) != '-'))
			return false;
	}
	return true;
}

std::string	BitcoinExchange::_trim( const std::string & s ) const
{
	size_t			start;
	size_t			end;

	start = s.find_first_not_of(" \t");
	end = s.find_last_not_of(" \t");

	if (start == std::string::npos || end == std::string::npos)
		return "";
	return s.substr(start, end - start + 1);
}
