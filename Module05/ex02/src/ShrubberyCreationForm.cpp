// ************************************************************************** //
//                                                                            //
//                ShrubberyCreationForm.cpp                                   //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "ShrubberyCreationForm.class.h"

// ~Structor

ShrubberyCreationForm::ShrubberyCreationForm() : AForm( "[No Name]", 145, 137 ) {}
ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & s ) : AForm( s.getName(), s.getApproved(), s.getToSign(), s.getToExec() ) {}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string & target ) : AForm( target, 145, 137 ) {}

// Operator Overload

ShrubberyCreationForm	&ShrubberyCreationForm::operator = ( const ShrubberyCreationForm & s ) { (void)s; return *this; }

// Methode

void	ShrubberyCreationForm::executeForm() const
{
	std::ofstream		outfile;

	outfile.open((getName() + "_shrubbery").c_str(), std::ofstream::binary);
	std::string	asciiTree = "          .     .  .      +     .      .          .\n     .       .      .     #       .           .\n        .      .         ###            .      .      .\n      .      .   \"#:. .:##\"##:. .:#\"  .      .\n          .      . \"####\"###\"####\"  .\n       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n  .             \"#########\"#########\"        .        .\n        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n                .\"##\"#####\"#####\"##\"           .      .\n    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n      .     \"#######\"##\"#####\"##\"#######\"      .     .\n    .    .     \"#####\"\"#######\"\"#####\"    .      .\n            .     \"      000      \"    .     .\n       .         .   .   000     .        .       .\n.. .. ..................O000O........................ ...... ...";

	outfile.write(asciiTree.c_str(), asciiTree.length());
	outfile.close();

	std::cout << "\033[96m" << "🎄 Made it! Ascii formed 🎄" << "\033[0m" << std::endl;
}
