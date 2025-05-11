// ************************************************************************** //
//                                                                            //
//                Span.cpp                                                    //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Span.class.h"

// ~Structor

Span::Span() {}
Span::~Span() {}

Span::Span( const Span & s ) { *this = s; }

// Operator Overload

Span	&Span::operator = ( const Span & s ) { (void)s; return *this; }

std::ostream	&operator << ( std::ostream & o, const Span & s ) { (void)s; return o << " Operator Span. " << std::endl; }
