// ************************************************************************** //
//                                                                            //
//                MutantStack.cpp                                             //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "MutantStack.class.h"

// ~structor

MutantStack::MutantStack() {}
MutantStack::~MutantStack() {}

MutantStack::MutantStack( const MutantStack & m ) { *this = m; }

// Operator Overload

MutantStack	&MutantStack::operator = ( const MutantStack & m ) { (void)m; return *this; }

std::ostream	&operator << ( std::ostream & o, const MutantStack & m ) { (void)m; return o << "Operator MutantStack." << std::endl; }
