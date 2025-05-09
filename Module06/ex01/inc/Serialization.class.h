// ************************************************************************** //
//                                                                            //
//                Serialization.class.h                                       //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef SERIALIZATION_CLASS_H
# define SERIALIZATION_CLASS_H

// Standard Libraries

# include <iostream>

// ************************************************************************** //
//                            Serialization Class                             //
// ************************************************************************** //

class	Serialization
{
	private:

		Serialization();

		Serialization( const Serialization & );
		Serialization & operator = ( const Serialization & );

	public:

		~Serialization();

		class Exception; // Prototypage
};

std::ostream & operator << ( std::ostream &, const Serialization & );

// Exception

class	Serialization::Exception : public std::exception
{
	public: const char * what() const throw() { return "\033[91merror\033[0m: Error"; }
};

#endif
