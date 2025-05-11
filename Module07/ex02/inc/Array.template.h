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

		T			*_arr;
		unsigned int		_size;

		Array();

		Array & operator = ( const Array & );

	public:

		~Array();

		Array( unsigned int );

		Array( const Array & );
		T & operator [] ( int ) const;

		// ~etter

		unsigned int size() const;
};

template <typename T> std::ostream & operator << ( std::ostream & o, const Array<T> & t ) { return o << "Arr size: " << t.size(); }

// ************************************************************************** //
//                          Array Class Functions                             //
// ************************************************************************** //

// ~structor

template <typename T> Array<T>::Array() : _arr( NULL ), _size( 0 ) {}
template <typename T> Array<T>::~Array() { delete [] _arr; }

template <typename T> Array<T>::Array( unsigned int n ) : _arr( new T[n]() ), _size( n ) {}

// Operator overload

template <typename T> Array<T>::Array( const Array<T> & t ) : _arr( NULL ), _size( t.size() ) { *this = t; }

template <typename T> Array<T> & Array<T>::operator = ( const Array<T> & t )
{
	if (this != &t)
	{
		delete [] _arr;
		_size = t.size();
		_arr = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_arr[i] = t._arr[i];
	}
	return *this;
}

template <typename T> T & Array<T>::operator [] ( int idx ) const
{
	if (idx < 0 || static_cast<unsigned int>(idx) >= size())
		throw std::out_of_range("Index of of range.");
	return _arr[idx];
}

// ~etter

template <typename T> unsigned int Array<T>::size() const { return _size; }

#endif
