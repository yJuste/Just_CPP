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

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {}
DiamondTrap::~DiamondTrap() { std::cout << "DiamondTrap Destructor called" << std::endl; }

DiamondTrap::DiamondTrap( const DiamondTrap & d ) { *this = d; }

DiamondTrap::DiamondTrap( const std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "\033[32m" << "Name of the DiamondTrap: " << getName() << "\033[0m" << std::endl;
	_hitPoint = FragTrap::getHitPoint();
	_energyPoint = ScavTrap::getEnergyPoint();
	_attackDamage = FragTrap::getAttackDamage();
	std::cout << "DiamondTrap Constructor called" << std::endl;
}

// Operator Overload

DiamondTrap	&DiamondTrap::operator = ( const DiamondTrap & d ) { ClapTrap::operator = (d); _name = d.getName(); return *this; }

// Methode

void	DiamondTrap::attack( const std::string & target ) { ScavTrap::attack(target); }

void	DiamondTrap::whoAmI() const
{
	std::cout << std::endl;
	std::cout << "\033[33m" << "++++++ My ClapTrap Name is : " << ClapTrap::getName() << " +++++++" << "\033[0m" << std::endl;
	std::cout << "\033[33m" << "++++++ My DiamondTrap Name is : " << getName() << " ++++++++++++++" << "\033[0m" << std::endl;
}

// Getter

std::string	DiamondTrap::getName() const { return _name; }
