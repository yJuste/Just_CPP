// ************************************************************************** //
//                                                                            //
//                IMateriaSource.cpp                                          //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "IMateriaSource.class.h"

// ~Structor

IMateriaSource::IMateriaSource() {}
IMateriaSource::~IMateriaSource() {}

IMateriaSource::IMateriaSource( const IMateriaSource & m ) { *this = m; }

IMateriaSource	&IMateriaSource::operator = ( const IMateriaSource & m ) { (void)m; return *this; }

std::ostream	&operator << ( std::ostream & o, const IMateriaSource & m ) { (void)m; return o << "IMateria Source"; }
