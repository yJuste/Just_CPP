/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:                                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:   by Juste                               #+#    #+#             */
/*   Updated:   by Juste                              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_H
# define PHONEBOOK_H

// Standard Libraries

# include <iostream>
# include <string>

// setw
# include <iomanip>

// Dependance

# include "Contact.h"

class	PhoneBook
{
	private:
		Contact		contact[8];
		int		currentIndex;
		int		totalContact;

		std::string	truncateString(const std::string &str) const;

	public:
		// Constructor
		PhoneBook();

		// Methode
		void	addContact(const Contact &contact);
		void	displayContact(int index) const;
		void	displayEveryContact() const;

		// Getter
		int	getNumberContact() const ;
};

#endif
