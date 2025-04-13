/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Juste                               #+#    #+#             */
/*   Updated:   by Juste                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.h"

// Constructor
Contact::Contact() : firstName(""), lastName(""), nickname(""),
			phoneNumber(""), darkestSecret("") {}

// Methode
void	Contact::setContact(std::string fname, std::string lname,
		std::string nname, std::string phone, std::string secret)
{
	firstName = fname;
	lastName = lname;
	nickname = nname;
	phoneNumber = phone;
	darkestSecret = secret;
}

// Getter
std::string	Contact::getFirstName() const { return firstName; }
std::string	Contact::getLastName() const { return lastName; }
std::string	Contact::getNickname() const { return nickname; }
std::string	Contact::getPhoneNumber() const { return phoneNumber; }
std::string	Contact::getDarkestSecret() const { return darkestSecret; }
