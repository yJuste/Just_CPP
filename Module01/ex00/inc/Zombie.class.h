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

		Zombie();

		void _announce();

	public:

		Zombie( std::string name );
		~Zombie();

		Zombie *newZombie( std::string name );
		void randomChump( std::string name );
};

#endif
