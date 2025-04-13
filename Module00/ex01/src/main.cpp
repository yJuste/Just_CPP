/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Juste                               #+#    #+#             */
/*   Updated:   by Juste                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"

// ------------------------PROTOTYPE------------------------
int				main(void);
static std::string	getInput(const std::string& prompt);
// ---------------------------------------------------------

int	main(void)
{
	PhoneBook	phoneBook;
	Contact		newContact;
	std::string	command;

	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (std::cin.eof() || command == "EXIT")
			break ;
		if (command == "ADD")
		{
			std::string firstName = getInput("Enter first name: ");
			if (firstName == "")
				continue ;
			std::string lastName = getInput("Enter last name: ");
			if (lastName == "")
				continue ;
			std::string nickname = getInput("Enter nickname: ");
			if (nickname == "")
				continue ;
			std::string phoneNumber = getInput("Enter phone number: ");
			if (phoneNumber == "")
				continue ;
			std::string darkestSecret = getInput("Enter darkest secret: ");
			if (darkestSecret == "")
				continue ;
			newContact.setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
			phoneBook.addContact(newContact);
			std::cout << "Contact \033[32m" << firstName << " " << lastName << "\033[0m is added." << std::endl;
		}
		if (command == "SEARCH")
		{
			phoneBook.displayEveryContact();
			if (phoneBook.getNumberContact() == 0)
				continue ;
			std::cout << "\033[32mEnter index to display details: \033[0m";
			std::string contactSearched;
			std::getline(std::cin, contactSearched);
			std::istringstream iss(contactSearched);
			int index = 0;
			if (!(iss >> index))
			{
				if (std::cin.eof())
					std::cout << "\n";
				std::cout << "\033[31mPhoneBook: MMhhh that's not a number..\033[0m" << std::endl;
				continue ;
			}
			phoneBook.displayContact(index);
		}
	}
	return (0);
}

static std::string	getInput(const std::string& prompt)
{
	std::string	command;

	std::cout << prompt;
	std::getline(std::cin, command);
	if (std::cin.eof() || command == "")
	{
		if (std::cin.eof())
			std::cout << "\n";
		std::cout << "\033[31mPhoneBook: invalid argument.\033[0m" << std::endl;
		if (std::cin.eof())
			std::exit(0);
	}
	if (command == "Je t'aime" || command == "I love you")
	{
		std::cout << "\033[32mPhoneBook: Me too ... :)\033[0m" << std::endl;
		command = "";
	}
	return (command);
}

