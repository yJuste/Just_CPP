// ************************************************************************** //
//                                                                            //
//                FragTrap.cpp                                                //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.class.h"

// ~Structor

FragTrap::FragTrap() {}
FragTrap::~FragTrap() {}

FragTrap::FragTrap( const FragTrap & f ) { *this = f; }

// Operator Overload

FragTrap	&FragTrap::operator = ( const FragTrap & f ) { (void)f; return *this; }

// Methode
