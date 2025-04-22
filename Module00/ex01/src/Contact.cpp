// ************************************************************************** //
//                                                                            //
//                Contact.cpp                                                 //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Contact.class.h"

Contact::Contact() : _firstName( "" ), _lastName( "" ), _nickname( "" ),
			_phoneNumber( "" ), _darkestSecret( "" ) {}

// Methode
void	Contact::setContact( const std::string fname, const std::string lname,
		const std::string nname, const std::string phone, const std::string secret )
{
	_firstName = fname;
	_lastName = lname;
	_nickname = nname;
	_phoneNumber = phone;
	_darkestSecret = secret;
}

// Getter
std::string	Contact::getFirstName() const { return _firstName; }
std::string	Contact::getLastName() const { return _lastName; }
std::string	Contact::getNickname() const { return _nickname; }
std::string	Contact::getPhoneNumber() const { return _phoneNumber; }
std::string	Contact::getDarkestSecret() const { return _darkestSecret; }
