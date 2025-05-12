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
