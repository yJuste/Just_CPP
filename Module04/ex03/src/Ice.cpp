// ************************************************************************** //
//                                                                            //
//                Ice.cpp                                                     //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Ice.class.h"

// ~Structor

Ice::Ice() {}
Ice::~Ice() {}

Ice::Ice( const Ice & c ) { *this = c; }

Ice	&Ice::operator = ( const Ice & c ) { (void)c; return *this; }

// Methode

AMateria	*Ice::clone() const { AMateria *copy = new Ice(); return copy; }
