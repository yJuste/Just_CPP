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
	Data		data1(713705, "Kiki la praline");

	std::cout << std::endl;
	std::cout << "Before serialize: " << std::endl;
	std::cout << "number: " << "\033[32m" << data1.n << "\033[0m" << " ; string: " << "\033[32m" << data1.s << "\033[0m" << std::endl;
	uintptr_t raw = Serializer::serialize( &data1 );
	std::cout << "After serialize: " << std::endl;
	std::cout << "number: " << "\033[32m" << reinterpret_cast<Data *>(raw)->n << "\033[0m" << " ; string: " << "\033[32m" << reinterpret_cast<Data *>(raw)->s << "\033[0m" << std::endl;

	std::cout << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << std::endl;

	Data		* data2 = Serializer::deserialize(raw);

	std::cout << "Before deserialize: " << std::endl;
	std::cout << "number: " << "\033[32m" << data1.n << "\033[0m" << " ; string: " << "\033[32m" << data1.s << "\033[0m" << std::endl;
	std::cout << "After deserialize: " << std::endl;
	std::cout << "number: " << "\033[32m" << data2->n << "\033[0m" << " ; string: " << "\033[32m" << data2->s << "\033[0m" << std::endl;
	std::cout << std::endl;
	if (&data1 == data2)
	{
		std::cout << "First pointer:\t" << "\033[32m" << &data1 << "\033[0m" << std::endl;
		std::cout << "Second pointer:\t" << "\033[32m" << data2 << "\033[0m" << std::endl;
	}
	else
		std::cout << "Pointers are not the same!" << std::endl;
	std::cout << std::endl;
	return 0;
}
