// ************************************************************************** //
//                                                                            //
//                main.cpp                                                    //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "main.h"

int	main(int argc, char **argv)
{
	int		nbOfZombies;
	Zombie		*zombies = NULL;

	nbOfZombies = 5;
	if (argc > 2)
	{
		std::cout << "MMh too much, too much my friend 🥸" << std::endl;
		return 1;
	}
	if (argc == 2)
	{
		std::istringstream iss(argv[1]);
		int index = 0;
		if (!(iss >> index))
		{
			std::cout << "Not a number, please.. 😣" << std::endl;
			return 2;
		}
		nbOfZombies = index;
		if (nbOfZombies < 0)
		{
			std::cout << "Negative, really ? Interesting 😑" << std::endl;
			return 3;
		}
	}
	std::cout << std::endl
	<< "Wait something is approaching..." << std::endl
	<< "I glimpsed people..." << std::endl
	<< "\033[31m  WAIT" << std::endl
	<< "AN HORD OF ZOMBIES, RUUUUN GUYS!!!!!!!\033[0m" << std::endl
	<< std::endl;

	zombies = zombieHorde(nbOfZombies, "Niark niark");
	for (int i = 0; i < nbOfZombies; i++)
		zombies[i].announce();
	delete [] zombies;
	return 0;
}
