// ************************************************************************** //
//                                                                            //
//                Cure.cpp                                                    //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Cure.class.h"

// ~Structor

Cure::Cure() : AMateria( "cure" ) {}
Cure::~Cure() {}

Cure::Cure( const Cure & c ) { *this = c; }

Cure	&Cure::operator = ( const Cure & c ) { (void)c; return *this; }

// Methode

AMateria	*Cure::clone() const { AMateria *copy = new Cure(); return copy; }
