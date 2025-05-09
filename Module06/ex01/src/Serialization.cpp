// ************************************************************************** //
//                                                                            //
//                Serialization.cpp                                           //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Serialization.class.h"

// ~Structor

Serialization::Serialization() {}
Serialization::~Serialization() {}

Serialization::Serialization( const Serialization & b ) { *this = b; }

// Operator Overload

Serialization	&Serialization::operator = ( const Serialization & s ) { (void)s; return *this; }

std::ostream	&operator << ( std::ostream & o, const Serialization & s ) { (void)s; return o << "Operator <<" << std::endl; }
