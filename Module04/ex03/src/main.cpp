// ************************************************************************** //
//                                                                            //
//                main.cpp                                                    //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "main.h"

int	main(void)
{
	AMateria	* ice = new Ice();
	AMateria	* cure = new Cure();

	ICharacter	* tom = new Character("Tom");
	ICharacter	* bourdon = new Character("Bourdon");

	// ------------------------------------------------------------------------------------
	std::cout << "\033[94m" << std::endl;

	AMateria	* m3 = NULL;

	m3 = cure->clone();

	std::cout << "Tom & Bourdon se baladent tranquillement dans le pre." << std::endl;
	tom->equip(m3);
	std::cout << "Tom dit: \"je peux dupliquer un materia WOW\" " << *m3 << std::endl;

	std::cout << "\033[0m" << std::endl;
	// ------------------------------------------------------------------------------------
	std::cout << "\033[95m" << std::endl;

	std::cout << "De maniere fortuite, Bourdon attaque Tom en le givrant: "; ice->use(*tom);
	std::cout << "NOOO dit Bourdon, Tom, Je vais te soigner: "; cure->use(*tom);

	std::cout << "\033[0m" << std::endl;
	std::cout << "\033[96m" << std::endl;

	AMateria	* m4 = NULL;
	AMateria	* m5 = NULL;
	AMateria	* m6 = NULL;

	m4 = cure->clone();
	m5 = cure->clone();
	m6 = ice->clone();
	AMateria * m4copy = m4;

	tom->equip(m4);
	tom->equip(m6);
	bourdon->equip(m5);

	std::cout << "Le bourdon utilise: "; bourdon->use(0, *tom);
	std::cout << "Tom le vaillant utilise: "; tom->use(0, *bourdon);
	std::cout << "Tom le vaillant utilise aussi son 2eme slot: "; tom->use(1, *bourdon);

	std::cout << "Tom lace au sol son materia ICE par terre"; tom->unequip(1);
	std::cout << "Oubliant qu'il s'en etait separe, il utilise quand meme. "; tom->use(1, *bourdon);
	std::cout << "Rien ne se passe";
	delete m4copy;

	std::cout << "\033[0m" << std::endl;
	// ------------------------------------------------------------------------------------
	std::cout << "\033[96m" << std::endl;

	ICharacter	* tomAlterEgo = NULL;

	std::cout << "Au loin, ils apercoivent quelqu'un" << std::endl;
	std::cout << "Mais c'est MOI !!!" << std::endl;
	tomAlterEgo = tom;
	std::cout << "\033[0m" << std::endl;
	std::cout << "Regarde Tom, je t'idolatre, je veux etre comme toi:" << std::endl;
	std::cout << *tomAlterEgo << std::endl;

	std::cout << "\033[0m" << std::endl;
	// ------------------------------------------------------------------------------------

	delete ice;
	delete cure;
	delete tom;
	delete bourdon;
	return 0;
}
