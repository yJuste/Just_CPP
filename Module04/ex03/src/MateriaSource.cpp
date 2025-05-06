// ************************************************************************** //
//                                                                            //
//                MateriaSource.cpp                                           //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "MateriaSource.class.h"

// ~Structor

MateriaSource::MateriaSource() {}
MateriaSource::~MateriaSource() {}

MateriaSource::MateriaSource( const MateriaSource & m ) { *this = m; }

MateriaSource	&MateriaSource::operator = ( const MateriaSource & m ) { (void)m; return *this; }

std::ostream	&operator << ( std::ostream & o, const MateriaSource & m ) { (void)m; return o << "I am in MateriaSource"; }
