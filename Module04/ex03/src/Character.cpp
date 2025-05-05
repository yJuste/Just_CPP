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

Character::Character() : _name( "" ) { (void)_item; }
Character::~Character() {}

Character::Character( const Character & c ) { *this = c; }
Character::Character( const std::string & name ) : _name(name) {}

Character	&Character::operator = ( const Character & c ) { (void)c; return *this; }

// Methode

void	Character::equip( AMateria * m ) { (void)m; }

void	Character::unequip( int idx ) { (void)idx; }

void	Character::use( int idx, ICharacter & target ) { (void)idx; (void)target; }

// Getter

const std::string	&Character::getName() const { return _name; }
