// ************************************************************************** //
//                                                                            //
//                WrongAnimal.class.h                                         //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef WRONGANIMAL_CLASS_H
# define WRONGANIMAL_CLASS_H

// Standard Libraries

# include <iostream>

// ************************************************************************** //
//                                WrongAnimal Class                           //
// ************************************************************************** //

class	WrongAnimal
{
	protected:

		std::string		_type;

	public:

		WrongAnimal();
		virtual ~WrongAnimal();

		WrongAnimal( const WrongAnimal & );

		WrongAnimal & operator = ( const WrongAnimal & );

		// Methode

		void makeSound() const;

		// ~Etter

		std::string getType() const;

		void setType( const std::string & );
};

std::ostream & operator << ( std::ostream &, const WrongAnimal & );

#endif
