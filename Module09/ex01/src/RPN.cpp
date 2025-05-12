// ************************************************************************** //
//                                                                            //
//                RPN.cpp                                                     //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "RPN.class.h"

// ~Structor

RPN::RPN() {}
RPN::~RPN() {}

RPN::RPN( const RPN & r ) { *this = r; }

// Operator Overload

RPN	&RPN::operator = ( const RPN & r ) { (void)r; return *this; }

std::ostream	&operator << ( std::ostream & o, const RPN & r ) { (void)r; return o << "RPN Operator <<"; }
