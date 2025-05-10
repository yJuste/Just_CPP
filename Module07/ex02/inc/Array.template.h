// ************************************************************************** //
//                                                                            //
//                Array.template.h                                            //
//                Created on  : xxx May xx xx:xx:xx 2025                      //
//                Last update : xxx May xx xx:xx:xx 2025                      //
//                Made by     : Juste - Jules Longin                          //
//                                                                            //
// ************************************************************************** //

#ifndef ARRAY_TEMPLATE_H
# define ARRAY_TEMPLATE_H

// ************************************************************************** //
//                               Array Template                               //
// ************************************************************************** //

template <typename T>

class	Array
{
	private:

		T		_arr;

	public:

		Array();
		~Array();

		Array( unsigned int );

		Array( const T & );
		Array & operator = ( const T & );

		// Member function

		int size() const;

		T getArr() const;
};

template <typename T>

std::ostream	&operator << ( std::ostream & o, const Array<T> & t ) { return o << "Arr size: " << t.getArr(); }

// ************************************************************************** //
//                                Array Class                                 //
// ************************************************************************** //

// ~structor

template <typename T> Array<T>::Array() {}
template <typename T> Array<T>::~Array() {}

template <typename T> Array<T>::Array( unsigned int n ) : _arr(n) {}

// Operator overload

template <typename T> Array<T>::Array( const T & t ) { *this = t; }
template <typename T> Array<T>& Array<T>::operator = ( const T & t ) { (void)t; return *this; }

// Member function

template <typename T> int Array<T>::size() const { return _arr; }

// ~etter

template <typename T> T	Array<T>::getArr() const { return _arr; }

#endif
