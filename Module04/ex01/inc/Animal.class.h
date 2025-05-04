// ************************************************************************** //
//                                                                            //
//                Animal.class.h                                              //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef ANIMAL_CLASS_H
# define ANIMAL_CLASS_H

// Standard Libraries

# include <iostream>

// ************************************************************************** //
//                                Animal Class                                //
// ************************************************************************** //

class	Animal
{
	protected:

		std::string		_type;

	public:

		Animal();
		virtual ~Animal();

		Animal( const Animal & );

		Animal & operator = ( const Animal & );

		// Methode

		virtual void makeSound() const;

		// ~Etter

		std::string getType() const;

		void setType( const std::string & );
};

std::ostream & operator << ( std::ostream &, const Animal & );

#endif
