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

Dog::Dog() : AAnimal() { setType("Dog"); _brain = new Brain(); std::cout << "Dog Constructor Called" << std::endl; }
Dog::~Dog() { delete _brain; std::cout << "Dog Destructor Called" << std::endl; }

Dog::Dog( const Dog & d ) { *this = d; }

Dog	&Dog::operator = ( const Dog & d ) { if (this != &d) { _type = d.getType(); _brain = new Brain(); } return *this; }

// Methode

void	Dog::makeSound() const { std::cout << "Ouaf Ouaf" << std::endl; }
