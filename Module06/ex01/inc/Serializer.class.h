// ************************************************************************** //
//                                                                            //
//                Serializer.class.h                                          //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef SERIALIZER_CLASS_H
# define SERIALIZER_CLASS_H

// Standard Libraries

# include <iostream>

// Dependences

# include "Data.class.h"

// ************************************************************************** //
//                              Serializer Class                              //
// ************************************************************************** //

class	Serializer
{
	private:

		Serializer();

		Serializer( const Serializer & );
		Serializer & operator = ( const Serializer & );

	public:

		~Serializer();

		// Member function

		static uintptr_t serialize( Data * );
		static Data * deserialize( uintptr_t raw );

		// Exception

		class Exception; // Prototypage
};

std::ostream & operator << ( std::ostream &, const Serializer & );

// Exception

class	Serializer::Exception : public std::exception
{
	public: const char * what() const throw() { return "\033[91merror\033[0m: Error"; }
};

#endif
