// ************************************************************************** //
//                                                                            //
//                Character.cpp                                               //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Character.class.h"

// ~Structor

Character::Character() : _name( "" ) { for (int i = 0; i < 4; i++) _item[i] = NULL; }

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_item[i] != NULL)
			delete _item[i];
		_item[i] = NULL;
	}
}

Character::Character( const Character & c ) : _name(c.getName())
{
	if (this != &c)
	{
		for (int i = 0; i < 4; i++)
		{
			if (c._item[i] != NULL)
				_item[i] = c._item[i]->clone();
			else
				_item[i] = NULL;
		}
	}
}

Character::Character( const std::string & name ) : _name(name) { for (int i = 0; i < 4; i++) _item[i] = NULL; }

// Operator Overload

Character	&Character::operator = ( const Character & c )
{
	if (this != &c)
	{
		_name = c.getName();
		for (int i = 0; i < 4; i++)
		{
			if (c._item[i] != NULL)
				_item[i] = c._item[i]->clone();
			else
				_item[i] = NULL;
		}
	}
	return *this;
}

// Methode

void	Character::equip( AMateria * m )
{
	for (int i = 0; i < 4; i++)
	{
		if (_item[i] == NULL)
			return (void)(_item[i] = m);
	}
}

void	Character::unequip( int idx )
{
	if (idx < 0 || idx > 3)
		return ;
	if (_item[idx] == NULL)
		return ;
	_item[idx] = NULL;
}

void	Character::use( int idx, ICharacter & target )
{
	if (idx < 0 || idx > 3)
		return ;
	if (_item[idx] == NULL)
		return ;
	_item[idx]->use(target);
}

void	Character::myInventory() const
{
	std::cout << "\033[0m" << "Voici mon inventaire: " << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_item[i])
			std::cout << "My " << i << " slot is " << "\033[92m" << _item[i]->getType() << "\033[0m" << std::endl;
		else
			std::cout << "My " << i << " slot is " << "\033[92m" << "[EMPTY]" << "\033[0m" << std::endl;
	}
}

// ~etter

const std::string	&Character::getName() const { return _name; }
