// ************************************************************************** //
//                                                                            //
//                WrongCat.cpp                                                //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "WrongCat.class.h"

// ~Structor

WrongCat::WrongCat() : WrongAnimal() { setType("WrongCat"); std::cout << "WrongCat Constructor Called" << std::endl; }
WrongCat::~WrongCat() { std::cout << "WrongCat Destructor Called" << std::endl; }

WrongCat::WrongCat( const WrongCat & d ) { *this = d; }

WrongCat	&WrongCat::operator = ( const WrongCat & d ) { WrongAnimal::operator = (d); return *this; }

// Methode

void	WrongCat::makeSound() const { std::cout << "Miaouuuuuuu" << std::endl; }
