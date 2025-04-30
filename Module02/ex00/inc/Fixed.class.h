// ************************************************************************** //
//                                                                            //
//                Fixed.class.h                                               //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

// Standard Libraries

# include <iostream>

// ************************************************************************** //
//                                Fixed Class                                 //
// ************************************************************************** //

class	Fixed
{
	private:

		int				_nb;
		static const int		_bit;

	public:

		Fixed();
		~Fixed();

		Fixed( const Fixed & );

		// Operator overload
		Fixed & operator = ( const Fixed & );

		// Setter
		void setRawBits( const int );

		// Getter
		int getRawBits() const;
};

#endif
