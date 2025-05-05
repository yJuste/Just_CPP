// ************************************************************************** //
//                                                                            //
//                AMateria.cpp                                                //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "AMateria.class.h"

// ~Structor

AMateria::AMateria() : _type( "" ) {}
AMateria::~AMateria() {}

AMateria::AMateria( const AMateria & m ) { *this = m; }
AMateria::AMateria( const std::string & type ) : _type(type) {}

AMateria	&AMateria::operator = ( const AMateria & m ) { (void)m; return *this; }

std::ostream	&operator << ( std::ostream & o, const AMateria & m ) { (void)m; return o << "exists" << ";my type: " << m.getType(); }

// Methode

void	AMateria::use( ICharacter & target ) { (void)target; }

// ~Etter

const std::string	&AMateria::getType() const { return _type; }
