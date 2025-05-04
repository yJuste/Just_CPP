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

void	ScavTrap::attack( const std::string & target )
{
	if (_hitPoint == 0)
		std::cout << "ScavTrap " << "\033[31m" << _name << "\033[0m" << " is dead." << std::endl;
	else if (_energyPoint == 0)
		std::cout << "ScavTrap " << "\033[33m" << _name << " has no more energy!" << "\033[0m" << std::endl;
	else
	{
		_energyPoint -= 1;
		std::cout << "ScavTrap " << "\033[32m" << _name << "\033[0m" << " attacks " << "\033[32m" << target << "\033[0m" << ", causing " << "\033[32m" << _attackDamage << "\033[0m" << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate() const { std::cout << "ScavTrap " << getName() << " is in " << "\033[31m" << "Gate Keeper Mode" << "\033[0m" << std::endl; }
