// ************************************************************************** //
//                                                                            //
//                Contact.class.h                                             //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

// Standard Libraries

# include <iostream>
# include <string>

// setw
# include <iomanip>

// Dependance

# include "Contact.class.h"

// ************************************************************************** //
//                               PhoneBook Class                              //
// ************************************************************************** //

class	PhoneBook
{
	private:

		Contact		_contact[8];
		int		_currentIndex;
		int		_totalContact;

		std::string _truncateString( const std::string &str ) const;

	public:

		PhoneBook();

		// Methode
		void addContact( const Contact &contact );
		void displayContact( const int index ) const;
		void displayEveryContact() const;

		// Getter
		int getNumberContact() const;
};

#endif
