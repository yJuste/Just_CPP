// ************************************************************************** //
//                                                                            //
//                Animal.cpp                                                  //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Animal.class.h"

// ~Structor

Animal::Animal() : _type( "" ) { std::cout << "Animal Constructor Called" << std::endl; }
Animal::~Animal() { std::cout << "Animal Destructor Called" << std::endl; }

Animal::Animal( const Animal & a ) { *this = a; }

// Operator Overload

Animal	&Animal::operator = ( const Animal & a ) { if (this != &a) _type = getType(); return *this; }

std::ostream	&operator << ( std::ostream & o, const Animal & a ) { return o << "Name of the Animal: " << a.getType() << std::endl; }

// Methode

void	Animal::makeSound() const { std::cout << "What am I supposed to say ?" << std::endl; }

// ~Etter

std::string	Animal::getType() const { return _type; }

void	Animal::setType( const std::string & type ) { _type = type; }
