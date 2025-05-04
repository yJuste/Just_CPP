// ************************************************************************** //
//                                                                            //
//                Dog.cpp                                                     //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Dog.class.h"

// ~Structor

Dog::Dog() : Animal() { setType("Dog"); std::cout << "Dog Constructor Called" << std::endl; }
Dog::~Dog() { std::cout << "Dog Destructor Called" << std::endl; }

Dog::Dog( const Dog & d ) { *this = d; }

Dog	&Dog::operator = ( const Dog & d ) { Animal::operator = (d); return *this; }

// Methode

void	Dog::makeSound() const { std::cout << "Ouaf Ouaf" << std::endl; }
