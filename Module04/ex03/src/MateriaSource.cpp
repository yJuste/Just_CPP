// ************************************************************************** //
//                                                                            //
//                MateriaSource.cpp                                           //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "MateriaSource.class.h"

// ~Structor

MateriaSource::MateriaSource() { for (int i = 0; i < 4; i++) _stock[i] = NULL; }

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_stock[i] != NULL)
			delete _stock[i];
		_stock[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource & m ) { *this = m; }

// Operator Overload

MateriaSource	&MateriaSource::operator = ( const MateriaSource & m )
{
	if (this != &m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_stock[i] != NULL)
				_stock[i] = m._stock[i]->clone();
		}
	}
	return *this;
}

// Methode

void	MateriaSource::learnMateria( AMateria * m )
{
	for (int i = 0; i < 4; i++)
	{
		if (_stock[i] == NULL)
			return (void)(_stock[i] = m);
	}
}

AMateria	*MateriaSource::createMateria( const std::string & type )
{
	if (type == "ice")
		return new Ice();
	if (type == "cure")
		return new Cure();
	return NULL;
}
