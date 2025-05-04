// ************************************************************************** //
//                                                                            //
//                DiamondTrap.cpp                                             //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "DiamondTrap.class.h"

// ~Structor

DiamondTrap::DiamondTrap() : ClapTrap() {}
DiamondTrap::~DiamondTrap() { std::cout << "DiamondTrap Destructor called" << std::endl; }

DiamondTrap::DiamondTrap( const DiamondTrap & d ) { *this = d; }

// Operator Overload

DiamondTrap	&DiamondTrap::operator = ( const DiamondTrap & d ) { (void)d; return *this; }
