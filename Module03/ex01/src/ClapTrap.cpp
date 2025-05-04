// ************************************************************************** //
//                                                                            //
//                ClapTrap.cpp                                                //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.class.h"

// ~Structor

ClapTrap::ClapTrap() : _name( "" ), _hitPoint( 0 ), _energyPoint( 0 ), _attackDamage( 0 ) {}
ClapTrap::~ClapTrap() { std::cout << "ClapTrap Destructor called" << std::endl; }

ClapTrap::ClapTrap ( const ClapTrap & c ) { *this = c; }
ClapTrap::ClapTrap( std::string name ) : _name( name ), _hitPoint( 10 ), _energyPoint( 10 ), _attackDamage( 0 ) { std::cout << "ClapTrap Constructor called" << std::endl; }

// Operator Overload

ClapTrap	&ClapTrap::operator = ( const ClapTrap & c )
{
	if (this != &c)
	{
		_name = c.getName();
		_hitPoint = c.getHitPoint();
		_energyPoint = c.getEnergyPoint();
		_attackDamage = c.getAttackDamage();
	}
	return *this;
}

std::ostream	&operator << ( std::ostream & o, const ClapTrap & c ) { return o << "Its name: " << c.getName() << "; hitPoint: " << c.getHitPoint() << "; energyPoint: " << c.getEnergyPoint() << "; attackDamage: " << c.getAttackDamage(); }

// Methode

void	ClapTrap::attack( const std::string & target )
{
	if (_hitPoint == 0)
		std::cout << "ClaTrap " << "\033[31m" << _name << "\033[0m" << " is dead." << std::endl;
	else if (_energyPoint == 0)
		std::cout << "ClaTrap " << "\033[33m" << _name << " has no more energy!" << "\033[0m" << std::endl;
	else
	{
		_energyPoint -= 1;
		std::cout << "ClapTrap " << "\033[32m" << _name << "\033[0m" << " attacks " << "\033[32m" << target << "\033[0m" << ", causing " << "\033[32m" << _attackDamage << "\033[0m" << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (_hitPoint == 0)
	{
		std::cout << "ClaTrap " << "\033[31m" << _name << "\033[0m" << " is dead." << std::endl;
		return ;
	}
	_hitPoint -= amount;
	if (_hitPoint <= 0)
		_hitPoint = 0;
	std::cout << "ClapTrap " << "\033[32m" << _name << "\033[0m" << " take " << "\033[32m" << amount << "\033[0m" << " points of damage.\t\tMy Health/Energy: " << "\033[32m" << _hitPoint << "  " << _energyPoint << "\033[0m" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (_hitPoint == 0)
		std::cout << "ClaTrap " << "\033[31m" << _name << "\033[0m" << " is dead." << std::endl;
	else if (_energyPoint == 0)
		std::cout << "ClaTrap " << "\033[33m" << _name << " has no more energy!" << "\033[0m" << std::endl;
	else
	{
		_hitPoint += amount;
		_energyPoint -= 1;
		std::cout << "ClapTrap " << "\033[32m" << _name << "\033[0m" << " restore " << "\033[32m" <<amount << "\033[0m" << " health points.\t\tMy Health/Energy: " << "\033[32m" << _hitPoint << "  " << _energyPoint << "\033[0m" << std::endl;
	}
}

// Getter

std::string	ClapTrap::getName() const { return _name; }
int	ClapTrap::getHitPoint() const { return _hitPoint; }
int	ClapTrap::getEnergyPoint() const { return _energyPoint; }
int	ClapTrap::getAttackDamage() const { return _attackDamage; }
