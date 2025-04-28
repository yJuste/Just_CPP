// ************************************************************************** //
//                                                                            //
//                Weapon.cpp                                                  //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "Weapon.class.h"

Weapon::Weapon( std::string type ) : _type(type) {}

// Setter
void	Weapon::setType( std::string type ) { _type = type; }

// Getter
std::string	Weapon::getType() const { return _type; }
