// ************************************************************************** //
//                                                                            //
//                Base.class.h                                                //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef BASE_CLASS_H
# define BASE_CLASS_H

// Standard Libraries

# include <iostream>

// ************************************************************************** //
//                                 Base Class                                 //
// ************************************************************************** //

class	Base
{
	public: virtual ~Base();
};

Base::~Base() {}

class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

#endif
