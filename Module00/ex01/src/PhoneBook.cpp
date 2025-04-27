// ************************************************************************** //
//                                                                            //
//                PhoneBook.cpp                                               //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "PhoneBook.class.h"

PhoneBook::PhoneBook() : _currentIndex( 0 ), _totalContact( 0 ) {}

// Methode
void	PhoneBook::addContact( const Contact &newContact )
{
	_contact[_currentIndex] = newContact;
	_currentIndex = (_currentIndex + 1) % 8;
	if (_totalContact < 8)
		_totalContact++;
}

void	PhoneBook::displayContact( const int index ) const
{
	if (index < 0 || index >= _totalContact)
	{
		std::cout << "\033[31mPhoneBook: The Contact is out of bounds!\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[32m" << std::setw(21) << "First Name : \033[0m" << _contact[index].getFirstName() << std::endl;
	std::cout << "\033[32m" << std::setw(21) << "Last Name : \033[0m" << _contact[index].getLastName() << std::endl;
	std::cout << "\033[32m" << std::setw(21) << "Nickname : \033[0m" << _contact[index].getNickname() << std::endl;
	std::cout << "\033[32m" << std::setw(21) << "Phone Number : \033[0m" << _contact[index].getPhoneNumber() << std::endl;
	std::cout << "\033[32m" << std::setw(21) << "Darkest Secret : \033[0m" << _contact[index].getDarkestSecret() << std::endl;
}

void	PhoneBook::displayEveryContact() const
{
	int		i;

	if (_totalContact == 0)
	{
		std::cout << "\033[95mPhoneBook is empty, you have no friend 🥺.\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[32m";
	std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|"
		<< std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "\033[0m";
	i = 0;
	while (i < _totalContact)
	{
		std::cout << std::setw(10) << i << "|"
			<< std::setw(10) << _truncateString(_contact[i].getFirstName()) << "|"
			<< std::setw(10) << _truncateString(_contact[i].getLastName()) << "|"
			<< std::setw(10) << _truncateString(_contact[i].getNickname()) << "|" << std::endl;
		i++;
	}
}

// Getter
int	PhoneBook::getNumberContact() const { return _totalContact; }

std::string	PhoneBook::_truncateString( const std::string &str ) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}
