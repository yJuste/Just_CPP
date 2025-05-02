// ************************************************************************** //
//                                                                            //
//                Fixed.class.h                                               //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
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
		static const int		s_bit;

	public:

		// ~Structor
		Fixed();
		~Fixed();
		Fixed( const Fixed & );
		Fixed( const int );
		Fixed( const float );

		// Operator overload
		Fixed & operator = ( const Fixed & );
		const Fixed operator + ( const Fixed & ) const;
		const Fixed operator - ( const Fixed & ) const;
		const Fixed operator * ( const Fixed & ) const;
		const Fixed operator / ( const Fixed & ) const;

		bool operator > ( const Fixed & ) const;
		bool operator < ( const Fixed & ) const;
		bool operator >= ( const Fixed & ) const;
		bool operator <= ( const Fixed & ) const;
		bool operator == ( const Fixed & ) const;
		bool operator != ( const Fixed & ) const;

		const Fixed & operator ++ ();
		const Fixed & operator -- ();
		const Fixed operator ++ ( int );
		const Fixed operator -- ( int );

		// Methode
		float toFloat() const;
		int toInt() const;

		static Fixed & min( Fixed & , Fixed & );
		static const Fixed & min( const Fixed &, const Fixed & );
		static Fixed & max( Fixed &, Fixed & );
		static const Fixed & max( const Fixed &, const Fixed & );

		// Setter
		void setRawBits( const int );

		// Getter
		int getRawBits() const;
};

std::ostream &operator << ( std::ostream &, const Fixed & );

#endif
