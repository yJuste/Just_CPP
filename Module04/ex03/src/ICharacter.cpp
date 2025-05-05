// ************************************************************************** //
//                                                                            //
//                ICharacter.cpp                                              //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "ICharacter.class.h"
#include "Character.class.h"

// ~Structor

ICharacter::ICharacter() {}
ICharacter::~ICharacter() {}

// Operator Overload

std::ostream	&operator << ( std::ostream & o, const ICharacter & c )
{
	o << "\033[0m";
	if (const Character * test = dynamic_cast<const Character *>(&c))
	{
		o << "Je suis " << c.getName() << std::endl;
		test->myInventory();
	}
	else
		o << "Not a Character actually..." << std::endl;
	return o;
}
