// ************************************************************************** //
//                                                                            //
//                ICharacter.cpp                                              //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "ICharacter.class.h"

// ~Structor

ICharacter::ICharacter() : _name( "" ) { (void)_item; }
ICharacter::~ICharacter() {}

ICharacter::ICharacter( const ICharacter & c ) { *this = c; }
ICharacter::ICharacter( const std::string & name ) : _name(name) {}

ICharacter	&ICharacter::operator = ( const ICharacter & c ) { (void)c; return *this; }
