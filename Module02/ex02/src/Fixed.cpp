// ************************************************************************** //
//                                                                            //
//                Fixed.cpp                                                   //
//                Created on  : xxx Apr xx xx:xx:xx 2025                      //
//                Last update : xxx Apr xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.h"

const int		Fixed::s_bit = 8;

// ~Structor
Fixed::Fixed() : _nb( 0 ) {}
Fixed::~Fixed() {}

Fixed::Fixed( const Fixed & src ) { *this = src; }
Fixed::Fixed( const int nb ) { _nb = nb << s_bit; }
Fixed::Fixed( const float nb ) { _nb = roundf(nb * (1 << s_bit)); }

// Operator Overload

// Arithmetic: = + - * /
Fixed	&Fixed::operator = ( const Fixed & f ) { if (this != &f) _nb = f.getRawBits(); return *this; }
Fixed	Fixed::operator + ( const Fixed & f ) const { Fixed res; res.setRawBits(_nb + f.getRawBits()); return res; }
Fixed	Fixed::operator - ( const Fixed & f ) const { Fixed res; res.setRawBits(_nb - f.getRawBits()); return res; }
Fixed	Fixed::operator * ( const Fixed & f ) const { Fixed res; res.setRawBits((_nb * f.getRawBits()) >> s_bit); return res; }
Fixed	Fixed::operator / ( const Fixed & f ) const { Fixed res; res.setRawBits((_nb << s_bit) / f.getRawBits()); return res; }

// Comparison: > < >= <= == !=
bool	Fixed::operator > ( const Fixed & f ) const { return _nb > f.getRawBits(); }
bool	Fixed::operator < ( const Fixed & f ) const { return _nb < f.getRawBits(); }
bool	Fixed::operator >= ( const Fixed & f ) const { return _nb >= f.getRawBits(); }
bool	Fixed::operator <= ( const Fixed & f ) const { return _nb <= f.getRawBits(); }
bool	Fixed::operator == ( const Fixed & f ) const { return _nb == f.getRawBits(); }
bool	Fixed::operator != ( const Fixed & f ) const { return _nb != f.getRawBits(); }

// ~Crementation: ++x x++ --x x--
Fixed	&Fixed::operator ++ () { _nb++; return *this; }
Fixed	&Fixed::operator -- () { _nb--; return *this; }
Fixed	Fixed::operator ++ ( int ) { Fixed t = *this; _nb++; return t; }
Fixed	Fixed::operator -- ( int ) { Fixed t = *this; _nb--; return t; }

// Printing: <<
std::ostream	&operator << ( std::ostream & o, const Fixed & f ) { return o << f.toFloat(); }

// Methode
float	Fixed::toFloat() const { return static_cast<float>(_nb) / (1 << s_bit); }

int	Fixed::toInt() const { return _nb >> s_bit; }

// Setter
void	Fixed::setRawBits( const int raw ) { _nb = raw; }

// Getter
int	Fixed::getRawBits() const { return _nb; }
