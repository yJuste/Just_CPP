// ************************************************************************** //
//                                                                            //
//                Intern.cpp                                                  //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Intern.class.h"

// ~Structor

Intern::Intern() {}
Intern::~Intern() {}

Intern::Intern( const Intern & i ) { *this = i; }

// Operator Overload

Intern	&Intern::operator = ( const Intern & i ) { (void)i; return *this; }
