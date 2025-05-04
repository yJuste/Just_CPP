// ************************************************************************** //
//                                                                            //
//                Brain.cpp                                                   //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Brain.class.h"

// ~Structor

Brain::Brain() { std::cout << "Brain Constructor Called" << std::endl; }
Brain::~Brain() { std::cout << "Brain Destructor Called" << std::endl; }

Brain::Brain( const Brain & b ) { *this = b; }

Brain	&Brain::operator = ( const Brain & b ) { (void)b; return *this; }
