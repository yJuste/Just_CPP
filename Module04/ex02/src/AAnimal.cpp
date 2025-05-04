// ************************************************************************** //
//                                                                            //
//                AAnimal.cpp                                                  //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "AAnimal.class.h"

// ~Structor

AAnimal::AAnimal() : _type( "" ) { std::cout << "AAnimal Constructor Called" << std::endl; }
AAnimal::~AAnimal() { std::cout << "AAnimal Destructor Called" << std::endl; }

AAnimal::AAnimal( const AAnimal & a ) { *this = a; }

// Operator Overload

AAnimal	&AAnimal::operator = ( const AAnimal & a ) { if (this != &a) _type = getType(); return *this; }

std::ostream	&operator << ( std::ostream & o, const AAnimal & a ) { return o << "Name of the AAnimal: " << a.getType() << std::endl; }

// Methode

void	AAnimal::makeSound() const { std::cout << "What am I supposed to say ?" << std::endl; }

// ~Etter

std::string	AAnimal::getType() const { return _type; }

void	AAnimal::setType( const std::string & type ) { _type = type; }
