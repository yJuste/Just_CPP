// ************************************************************************** //
//                                                                            //
//                main.cpp                                                    //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

# include "main.h"

// ---------------------------------PROTOTYPE-----------------------------------
int		copyFile( std::ifstream & infile, std::ofstream & outfile, std::string filename );
int		replaceOccurences( std::ifstream & infile, std::ofstream & outfile, char *first_string, char *second_string );
int		errors( std::string executable, std::string error, int i );
// -----------------------------------------------------------------------------

int	main(int argc, char **argv)
{
	std::ifstream		infile;
	std::ofstream		outfile;

	if (argc == 2 && (std::strcmp(argv[1], "help") == 0 || std::strcmp(argv[1], "-help") == 0))
		return errors(argv[0], "help", 1);
	if (argc != 4)
		return errors(argv[0], "too many arguments", 2);
	if (copyFile(infile, outfile, argv[1]) == 3)
		return errors(argv[0], argv[1], 3);

	replaceOccurences(infile, outfile, argv[2], argv[3]);

	infile.close();
	outfile.close();
	return 0;
}

int	copyFile( std::ifstream & infile, std::ofstream & outfile, std::string filename )
{
	infile.open(filename, std::ifstream::binary);
	if (!infile.is_open())
		return 3;
	outfile.open(filename + ".replace", std::ofstream::binary);

	infile.seekg(0, infile.end);
	int size = infile.tellg();
	infile.seekg(0);

	char *buf = new char[size];

	infile.read(buf, size);

	delete [] buf;
	return 0;
}

int	replaceOccurences( std::ifstream & infile, std::ofstream & outfile, char *first_string, char *second_string )
{
	char		c;

	infile.seekg(0);
	outfile.seekp(0);

	while (infile.get(c))
	{
		int j = 0;
		if (c == first_string[j])
		{
			j++;
			int pos = infile.tellg();
			while (j < (int)std::strlen(first_string) && infile.get(c) && c == first_string[j])
				j++;
			if (!first_string[j])
				outfile.write(second_string, std::strlen(second_string));
			else
			{
				infile.seekg(pos);
				for (int k = 0; k < j; k++)
					outfile.put(first_string[k]);
			}
		}
		else
			outfile.put(c);
	}

	return 0;
}

int	errors( std::string executable, std::string error, int i )
{
	if (i == 1)
		std::cout << executable.substr(2) << ": " << "help: " << "The " << "\033[32m" << "first_string" << "\033[0m" << " will be replaced by the " << "\033[32m" << "second_string" << "\033[0m" << " in a new file." << std::endl;
	else if (i == 2)
		std::cout << executable.substr(2) << ": " << "\033[31m" << "error" << "\033[0m" << ": " << "./copyMe [file] [first_string] [second_string]" << std::endl;
	else if (i == 3)
		std::cout << executable.substr(2) << ": " << "\033[31m" << "error" << "\033[0m" << ": " << "Cannot open " << "\033[31m" << error << "\033[0m" << " because it doesn't exist." << std::endl;
	return i;
}
