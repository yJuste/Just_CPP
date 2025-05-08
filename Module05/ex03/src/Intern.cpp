// ************************************************************************** //
//                                                                            //
//                Intern.cpp                                                  //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Intern.class.h"

// ~Structor

Intern::Intern() {}
Intern::~Intern() {}

Intern::Intern( const Intern & i ) { *this = i; }

// Operator Overload

Intern	&Intern::operator = ( const Intern & i ) { (void)i; return *this; }

// Methode

AForm	*Intern::makeForm( const std::string & form, const std::string & target ) const
{
	const	Entry entry[] =
	{
		{ { "shrubbery", "creation" }, createShrubberyCreationForm },
		{ { "robotomy", "request" }, createRobotomyRequestForm },
		{ { "presidential", "pardon" }, createPresidentialPardonForm },
	};

	std::string		fm = toLower(form);

	for (int i = 0; i < (int)sizeof(entry) / (int)sizeof(Entry); i++)
	{
		const Entry & e = entry[i];
		if (fm.find(e.keywords[0]) != std::string::npos || fm.find(e.keywords[1]) != std::string::npos)
		{
			std::cout << "Intern creates " << e.keywords[0] << " " << e.keywords[1] << std::endl;
			return e.create(target);
		}
	}
	throw NoFormFound();
}

// Private

AForm	*Intern::createShrubberyCreationForm( const std::string & target ) { return new ShrubberyCreationForm(target); }
AForm	*Intern::createRobotomyRequestForm( const std::string & target ) { return new RobotomyRequestForm(target); }
AForm	*Intern::createPresidentialPardonForm( const std::string & target ) { return new PresidentialPardonForm(target); }

std::string	Intern::toLower( const std::string & s )
{
	std::string		res = s;

	for (int i = 0; i < (int)res.length(); i++)
		res[i] = std::tolower(res[i]);
	return res;
}
