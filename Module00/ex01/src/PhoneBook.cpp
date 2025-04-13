/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Juste                               #+#    #+#             */
/*   Updated:   by Juste                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.h"

// Constructor
PhoneBook::PhoneBook() : currentIndex(0), totalContact(0) {}

// Methode
void	PhoneBook::addContact(const Contact &newContact)
{
	contact[currentIndex] = newContact;
	currentIndex = (currentIndex + 1) % 8;
	if (totalContact < 8)
		totalContact++;
}

void	PhoneBook::displayContact(int index) const
{
	if (index < 0 || index >= totalContact)
	{
		std::cout << "\033[31mPhoneBook: The Contact is out of bounds!\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[32m" << std::setw(21) << "First Name : \033[0m" << contact[index].getFirstName() << std::endl;
	std::cout << "\033[32m" << std::setw(21) << "Last Name : \033[0m" << contact[index].getLastName() << std::endl;
	std::cout << "\033[32m" << std::setw(21) << "Nickname : \033[0m" << contact[index].getNickname() << std::endl;
	std::cout << "\033[32m" << std::setw(21) << "Phone Number : \033[0m" << contact[index].getPhoneNumber() << std::endl;
	std::cout << "\033[32m" << std::setw(21) << "Darkest Secret : \033[0m" << contact[index].getDarkestSecret() << std::endl;
}

void	PhoneBook::displayEveryContact() const
{
	int		i;

	if (totalContact == 0)
	{
		std::cout << "\033[95mPhoneBook is empty, you have no friend 🥺.\033[0m" << std::endl;
		return ;
	}
	i = 0;
	std::cout << "\033[32m";
	std::cout << std::setw(10) << "Index" << "|"
		<< std::setw(10) << "First Name" << "|"
		<< std::setw(10) << "Last Name" << "|"
		<< std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "\033[0m";
	while (i < totalContact)
	{
		std::cout << std::setw(10) << i << "|"
			<< std::setw(10) << truncateString(contact[i].getFirstName()) << "|"
			<< std::setw(10) << truncateString(contact[i].getLastName()) << "|"
			<< std::setw(10) << truncateString(contact[i].getNickname()) << "|" << std::endl;
		i++;
	}
}

// Getter
int	PhoneBook::getNumberContact() const { return totalContact; }

// Utils
std::string	PhoneBook::truncateString(const std::string &str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

