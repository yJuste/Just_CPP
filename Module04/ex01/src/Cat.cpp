// ************************************************************************** //
//                                                                            //
//                Cat.cpp                                                     //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Cat.class.h"

// ~Structor

Cat::Cat() : Animal() { setType("Cat"); _brain = new Brain(); std::cout << "Cat Constructor Called" << std::endl; }
Cat::~Cat() { delete _brain; std::cout << "Cat Destructor Called" << std::endl; }

Cat::Cat( const Cat & c ) { *this = c; }

Cat	&Cat::operator = ( const Cat & d ) { Animal::operator = (d); return *this; }

// Methode

void	Cat::makeSound() const { std::cout << "Miaouuuuuuu" << std::endl; }
