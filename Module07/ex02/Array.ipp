#include "Array.hpp"

template<class T>
Array<T>::Array( void )
    : arr(nullptr), _size(0)
{}

template<class T>
Array<T>::Array( unsigned int size )
    : _size(size)
{
    arr = new T[size]();
}

template<class T>
Array<T>::Array( const Array& array )
    : _size(array._size)
{
    *this = array;
}

template<class T>
Array<T>::~Array()
{
    delete[] arr;
}

template<class T>
const char* Array<T>::OutOfRange::what() const throw()
{
    return "ArrayException: index out of range";
}

template<class T>
Array<T>& Array<T>::operator=( const Array& array )
{
    if (this != &array)
    {
        _size = array._size;
        if (_size)
            delete[] arr;
        arr = new T[_size]();
        for (size_t i = 0; i < _size; ++i)
            arr[i] = array.arr[i];
    }
}

template<class T>
const T& Array<T>::operator[]( std::size_t index ) const
{
    if (index < 0 || index > _size - 1)
        throw Array::OutOfRange();
    return arr[index];
}

template<class T>
T& Array<T>::operator[]( std::size_t index )
{
    if (index < 0 || index > _size - 1)
        throw Array::OutOfRange();
    return arr[index];
}

template<class T>
unsigned int Array<T>::size( void ) const
{
    return _size;
}