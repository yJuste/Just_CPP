// ************************************************************************** //
//                                                                            //
//                WrongAnimal.cpp                                             //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "WrongAnimal.class.h"

// ~Structor

WrongAnimal::WrongAnimal() : _type( "" ) { std::cout << "WrongAnimal Constructor Called" << std::endl; }
WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal Destructor Called" << std::endl; }

WrongAnimal::WrongAnimal( const WrongAnimal & a ) { *this = a; }

// Operator Overload

WrongAnimal	&WrongAnimal::operator = ( const WrongAnimal & a ) { if (this != &a) _type = getType(); return *this; }

std::ostream	&operator << ( std::ostream & o, const WrongAnimal & a ) { return o << "Name of the WrongAnimal: " << a.getType() << std::endl; }

// Methode

void	WrongAnimal::makeSound() const { std::cout << "What am I supposed to say ?" << std::endl; }

// ~Etter

std::string	WrongAnimal::getType() const { return _type; }

void	WrongAnimal::setType( const std::string & type ) { _type = type; }
