// ************************************************************************** //
//                                                                            //
//                main.cpp                                                    //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "main.h"

// -----------------------------PROTOTYPE---------------------------------
int		copyFile(std::string fileToCopy, std::ofstream & outfile);
int		errors(std::string executable, std::string error, int i);
// -----------------------------------------------------------------------

int	main(int argc, char **argv)
{
	std::ofstream		outfile;

	if (argc == 2 && (std::strcmp(argv[1], "help") == 0 || std::strcmp(argv[1], "-help") == 0))
		return errors(argv[0], "help", 1);
	if (argc != 4)
		return errors(argv[0], "too many arguments", 2);
	if (copyFile(argv[1], outfile) == 3)
		return errors(argv[0], argv[1], 3);
	outfile.close();
	return 0;
}

int	copyFile(std::string fileToCopy, std::ofstream & outfile)
{
	std::ifstream		infile;

	(void)fileToCopy;
	infile.open(fileToCopy, std::ifstream::binary);
	if (!infile.is_open())
		return 3;
	outfile.open(fileToCopy + ".replace", std::ofstream::binary);

	infile.seekg(0, infile.end);
	long size = infile.tellg();
	infile.seekg(0);

	char *buf = new char[size];

	infile.read(buf, size);
	outfile.write(buf, size);

	delete [] buf;
	infile.close();
	return 0;
}

int	errors(std::string executable, std::string error, int i)
{
	if (i == 1)
		std::cout << executable.substr(2) << ": " << "The '" << "\033[32m" << "first_string" << "\033[0m" << "' will be replaced by the '" << "\033[32m" << "second_string" << "\033[0m" << "' in a new file." << std::endl;
	else if (i == 2)
		std::cout << executable.substr(2) << ": " << "\033[31m" << "error" << "\033[0m" << ": " << "./copyMe [file] [first_string] [second_string]" << std::endl;
	else if (i == 3)
		std::cout << executable.substr(2) << ": " << "\033[31m" << "error" << "\033[0m" << ": " << "Cannot open " << "\033[32m" << error << "\033[0m" << " because it doesn't exist." << std::endl;
	return i;
}
