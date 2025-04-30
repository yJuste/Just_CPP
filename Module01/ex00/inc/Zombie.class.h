// ************************************************************************** //
//                                                                            //
//                Zombie.class.h                                              //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

// Standard Libraries

# include <iostream>

// ************************************************************************** //
//                               Zombie Class                                 //
// ************************************************************************** //

class	Zombie
{
	private:

		std::string		_name;

	public:

		Zombie();
		Zombie( std::string name );
		~Zombie();

		void announce() const;
};

Zombie *newZombie( std::string name );
void randomChump( std::string name );

#endif
