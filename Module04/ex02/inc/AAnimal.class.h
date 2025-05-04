// ************************************************************************** //
//                                                                            //
//                AAnimal.class.h                                             //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef AANIMAL_CLASS_H
# define AANIMAL_CLASS_H

// Standard Libraries

# include <iostream>

// ************************************************************************** //
//                                AAnimal Class                               //
// ************************************************************************** //

class	AAnimal
{
	protected:

		std::string		_type;

	public:

		AAnimal();
		virtual ~AAnimal();

		AAnimal( const AAnimal & );

		AAnimal & operator = ( const AAnimal & );

		// Methode

		virtual void makeSound() const = 0;

		// ~Etter

		std::string getType() const;

		void setType( const std::string & );
};

std::ostream & operator << ( std::ostream &, const AAnimal & );

#endif
