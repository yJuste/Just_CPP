// ************************************************************************** //
//                                                                            //
//                Contact.class.h                                             //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

// Standard Libraries

# include <string>

// ************************************************************************** //
//                               Contact Class                                //
// ************************************************************************** //

class	Contact
{
	private:
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickname;
		std::string		_phoneNumber;
		std::string		_darkestSecret;

	public:
		Contact();

		// Methode
		void setContact( const std::string firstName, const std::string lastName,
			const std::string nickname, const std::string phoneNumber, const std::string darkestSecret );

		// Getter
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
};

#endif
