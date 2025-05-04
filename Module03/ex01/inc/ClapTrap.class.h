// ************************************************************************** //
//                                                                            //
//                ClapTrap.class.h                                            //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_CLASS_H
# define CLAPTRAP_CLASS_H

// Standard Libraries

# include <iostream>

// ************************************************************************** //
//                                ClapTrap Class                              //
// ************************************************************************** //

class	ClapTrap
{
	protected:

		std::string		_name;
		int			_hitPoint;
		int			_energyPoint;
		int			_attackDamage;

		ClapTrap();

	public:

		~ClapTrap();

		ClapTrap( const ClapTrap & );
		ClapTrap( std::string );

		// Operator Overload

		ClapTrap & operator = ( const ClapTrap & );

		// Methode

		void attack( const std::string & );
		void takeDamage( unsigned int );
		void beRepaired( unsigned int );

		// Getter

		std::string getName() const;
		int getHitPoint() const;
		int getEnergyPoint() const;
		int getAttackDamage() const;
};

std::ostream & operator << ( std::ostream &, const ClapTrap & );

#endif
