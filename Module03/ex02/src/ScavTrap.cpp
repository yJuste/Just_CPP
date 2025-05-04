// ************************************************************************** //
//                                                                            //
//                ScavTrap.cpp                                                //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.class.h"

// ~Structor

ScavTrap::ScavTrap() : ClapTrap() {}
ScavTrap::~ScavTrap() { std::cout << "ScavTrap Destructor called" << std::endl; }

ScavTrap::ScavTrap( const ScavTrap & s ) { *this = s; }
ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) { _hitPoint = 100; _energyPoint = 50; _attackDamage = 20 ; std::cout << "ScavTrap Constructor called" << std::endl; }

// Operator Overload

ScavTrap	&ScavTrap::operator = ( const ScavTrap & c ) { ClapTrap::operator = (c); return *this; }

// Methode

void	ScavTrap::guardGate() const { std::cout << "ScavTrap " << getName() << " is in " << "\033[31m" << "Gate Keeper Mode" << "\033[0m" << std::endl; }
