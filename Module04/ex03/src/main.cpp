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

	// --------------CLONE/INIT------------------------------------------------------------
	std::cout << "\033[94m" << std::endl;

	AMateria	* m3 = NULL;

	m3 = cure->clone();

	std::cout << "Tom & Bourdon se baladent tranquillement dans le pre." << std::endl;
	tom->equip(m3);
	std::cout << "Tom dit: \"je peux dupliquer un materia WOW\" " << *m3 << std::endl;

	std::cout << "\033[0m" << std::endl;
	// -------------EQUIP------------------------------------------------------------------
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
	// -----------LES COPIES---------------------------------------------------------------
	std::cout << "\033[96m" << std::endl;

	ICharacter	* tomAlterEgo = NULL;
	ICharacter	* bourdonAlterEgo(bourdon);

	std::cout << "Au loin, ils apercoivent quelqu'un" << std::endl;
	std::cout << "Mais c'est MOI !!!" << std::endl;
	tomAlterEgo = tom;
	std::cout << "\033[0m" << std::endl;
	std::cout << "Regarde Tom, je t'idolatre, je veux etre comme toi:" << std::endl;
	std::cout << *tomAlterEgo << std::endl;
	std::cout << "Regarde Bourdon, MOI AUSSIIIIII: " << std::endl;
	std::cout << *bourdonAlterEgo << std::endl;

	std::cout << "\033[0m" << std::endl;
	// -------------MATERIA SOURCE---------------------------------------------------------
	std::cout << "\033[98m" << std::endl;

	std::cout << "Tom, dit Bourdon, regarde j'ai un stock de Materia * il sort une bourse *" << std::endl;
	std::cout << "Tu veux quoi comme Materia ?" << std::endl;
	std::cout << "Tom lui dit : TOOOOOOOOUUUUUT" << std::endl;
	std::cout << "Bourdon lui sortit tout ce qu'il y a dans la bourse: " << std::endl;

	IMateriaSource * stockOfMateria = new MateriaSource();
	stockOfMateria->learnMateria(new Ice());
	stockOfMateria->learnMateria(new Cure());

	bourdon->equip(stockOfMateria->createMateria("ice"));
	bourdon->equip(stockOfMateria->createMateria("cure"));

	std::cout << "Regarde Tom :" << std::endl << std::endl;
	std::cout << *bourdon << std::endl;

	bourdon->use(1, *tom);
	bourdon->use(2, *tom);

	std::cout << "Roooh, c'etait pour tester, JOOOOOOKE!" << std::endl;

	std::cout << "\033[0m" << std::endl;
	// ------------------------------------------------------------------------------------

	delete stockOfMateria;
	delete ice;
	delete cure;
	delete tom;
	delete bourdon;
	return 0;
}

//		MATERIA SOURCE
/*int	main(void)
{
	IMateriaSource * src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	IMateriaSource * cpy = src;

	ICharacter* me = new Character("me");

	AMateria * tmp;
	tmp = cpy->createMateria("ice");
	me->equip(tmp);
	tmp = cpy->createMateria("cure");
	me->equip(tmp);
	ICharacter * bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}*/
