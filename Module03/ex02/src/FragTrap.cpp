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

FragTrap::FragTrap() : ClapTrap() {}
FragTrap::~FragTrap() { std::cout << "FragTrap Destructor called" << std::endl; }

FragTrap::FragTrap( const FragTrap & f ) { *this = f; }
FragTrap::FragTrap( std::string name ) : ClapTrap(name) { _hitPoint = 100; _energyPoint = 100; _attackDamage = 30; std::cout << "FragTrap Constructor called" << std::endl; }

// Operator Overload

FragTrap	&FragTrap::operator = ( const FragTrap & f ) { (void)f; return *this; }

// Methode

void	FragTrap::highFivesGuys() const { std::cout << "FragTrap " << getName() << " says: " << "\033[35m" << "Hey, chill guys, be friends ❤️ " << "\033[0m" << std::endl; }
