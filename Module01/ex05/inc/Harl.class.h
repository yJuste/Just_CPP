// ************************************************************************** //
//                                                                            //
//                Harl.class.h                                                //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef HARL_CLASS_H
# define HARL_CLASS_H

// Standard Libraries

# include <iostream>

// ************************************************************************** //
//                                Harl Class                                  //
// ************************************************************************** //

class	Harl
{
	private:

		void _debug() const;
		void _info() const;
		void _warning() const;
		void _error() const;

	public:

		void complain( std::string level ) const;
};

#endif
