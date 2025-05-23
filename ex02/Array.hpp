// Array.hpp
#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept> // per std::OutOfBounds

template <typename T>
class Array {
private:
	T* _data;
	unsigned int _size;

public:
	Array() : _data(NULL), _size(0) {}
	
	Array(unsigned int n) : _data(new T[n]()), _size(n) {}
	
	Array(const Array& other) : _data(new T[other._size]), _size(other._size)
	{
		for (unsigned int i = 0; i < _size; ++i) {
			_data[i] = other._data[i];
		}
	}
	
	Array& operator=(const Array& other)
	{
		if (this == &other)
			return *this;
		delete[] _data;
		_size = other._size;
		_data = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_data[i] = other._data[i];
		return *this;
	}
	
	T& operator[](unsigned int index)
	{
		if (index >= _size)
			throw std::OutOfBounds("Out of bounds\n");
		return _data[index];
	}

	const T& operator[](unsigned int index) const
	{
		if (index >= _size)
			throw std::OutOfBounds("Out of bounds\n");
		return _data[index];
	}

	unsigned int size() const
	{
		return _size;
	}

	~Array()
	{
		delete[] _data;
	}
};

#endif
