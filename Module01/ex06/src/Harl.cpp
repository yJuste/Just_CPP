// ************************************************************************** //
//                                                                            //
//                Harl.cpp                                                    //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Harl.class.h"

void	Harl::_debug( void ) const
{
	std::cout << "\033[37m" << "[ DEBUG ]" << "\033[0m" << std::endl;
	std::cout << "\033[37m" << "Tu détruiras ma confiance, ma joie, mon coeur, et je deviendrai addict à toi, de tes gestes, de ton être et de tout ce que tu es." << "\033[0m" << std::endl;
}

void	Harl::_info( void ) const
{
	std::cout << "\033[32m" << "[ INFO ]" << "\033[0m" << std::endl;
	std::cout << "\033[32m" << "Détruit tout ce que je possède et tu verras mon âme torturée, mon corps décimé." << "\033[0m" << std::endl;
}

void	Harl::_warning( void ) const
{
	std::cout << "\033[31m" << "[ WARNING ]" << "\033[0m" << std::endl;
	std::cout << "\033[31m" << "Je te chuchote c'est toi et moi pour la vie et tu le sais!" << "\033[0m" << std::endl;
}

void	Harl::_error( void ) const
{
	std::cout << "\033[34m" << "[ ERROR ]" << "\033[0m" << std::endl;
	std::cout << "\033[34m" << "Tu ne m'atteindras plus jamais." << "\033[0m" << std::endl;
}

void	Harl::complain( std::string level ) const
{
	typedef void		(Harl::*f)( void ) const;

	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	f harl_message[] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	int		x = -1;

	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			x = i;

	switch (x)
	{
		case 0:
			(this->*harl_message[0])();
		case 1:
			(this->*harl_message[1])();
		case 2:
			(this->*harl_message[2])();
		case 3:
			(this->*harl_message[3])();
			break ;
		case -1:
			std::cout << "No level found, critic, your session will expired." << std::endl;
	}
}
