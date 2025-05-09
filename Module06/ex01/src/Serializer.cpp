// ************************************************************************** //
//                                                                            //
//                Serializer.cpp                                              //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Serializer.class.h"

// ~Structor

Serializer::Serializer() {}
Serializer::~Serializer() {}

Serializer::Serializer( const Serializer & b ) { *this = b; }

// Operator Overload

Serializer	&Serializer::operator = ( const Serializer & s ) { (void)s; return *this; }

std::ostream	&operator << ( std::ostream & o, const Serializer & s ) { (void)s; return o << "Operator Serializer" << std::endl; }

// Member function

uintptr_t	Serializer::serialize( Data * ptr )
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*Serializer::deserialize( uintptr_t raw )
{
	return reinterpret_cast<Data *>(raw);
}
