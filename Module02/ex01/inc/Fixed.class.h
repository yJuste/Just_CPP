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
# include <cmath>

// ************************************************************************** //
//                                Fixed Class                                 //
// ************************************************************************** //

class	Fixed
{
	private:

		int				_nb;
		static const int		_bit;

	public:

		// ~Structor
		Fixed();
		~Fixed();
		Fixed( const Fixed & );
		Fixed( const int );
		Fixed( const float );

		// Operator overload
		Fixed & operator = ( const Fixed & );

		// Methode
		float toFloat() const;
		int toInt() const;

		// Setter
		void setRawBits( const int );

		// Getter
		int getRawBits() const;
};

std::ostream &operator << ( std::ostream &, const Fixed & );

#endif
