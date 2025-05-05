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

Character::Character() : _index( 0 ), _name( "" ) { for (int i = 0; i < 4; i++) _item[i] = NULL; }
Character::~Character()
{ for (int i = 0; i < 4; i++) { if (_item[i] != NULL) delete _item[i]; _item[i] = NULL; } }

Character::Character( const Character & c ) { *this = c; }
Character::Character( const std::string & name ) : _index( 0 ), _name(name) { for (int i = 0; i < 4; i++) _item[i] = NULL; }


Character	&Character::operator = ( const Character & c )
{
	(void)c;
	return *this;
}

std::ostream	&operator << ( std::ostream & o, const Character & c ) { return o << "My name is: " << c.getName() << std::endl; }

// Methode

void	Character::equip( AMateria * m )
{
	if (getIndex() == 4)
		return ;
	_item[_index] = m;
	_index++;
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

// Getter

const std::string	&Character::getName() const { return _name; }
int	Character::getIndex() const { return _index; }
