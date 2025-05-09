// ************************************************************************** //
//                                                                            //
//                Data.struct.h                                               //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef DATA_STRUCT_H
# define DATA_STRUCT_H

// Standard Libraries

# include <iostream>

// ************************************************************************** //
//                                 Data Struct                                //
// ************************************************************************** //

struct	Data
{
	int				n;
	const std::string		s;

	Data(int number = 0, const std::string & string = "" ) : n(number), s(string) {}
};

#endif
