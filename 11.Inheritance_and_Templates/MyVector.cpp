#include "MyVector.h"

template<class T, class R>
inline void MyVector<T, R>::resize()
{
	T* newArr = new T[capacity * 2];
	for (int i = 0; i < capacity; i++)
	{
		newArr[i] = data[i];
	}
	delete data;
	data = newArr;
	capacity *= 2;
}

template<class T, class R>
inline MyVector<T, R>::MyVector()
{
	int size = 0;
	int capacity = 8;
	data = new T[capacity];
}

template<class T, class R>
inline MyVector<T, R>::~MyVector()
{
	delete[] data;
}

template<class T, class R>
inline MyVector<T, R>::MyVector(const MyVector& other)
{
	data = new T[other.capacity];
	capacity = other.capacity;
	size = other.size;
	for (int i = 0; i < size; i++)
	{
		data[i] = other.data[i];
	}
}

template<class T, class R>
inline MyVector<T, R>::MyVector(MyVector&& other)
{
	data = other.data;
	capacity = other.capacity;
	size = other.size;
	other.data = nullptr;
	other.capacity = 0;
	other.size = 0;
}

template<class T, class R>
inline MyVector<T, R>& MyVector<T, R>::operator=(const MyVector& other)
{
	if (&other != this) {
		delete data;
		size = other.size;
		capacity = other.capacity;
		for (int i = 0; i < size; i++)
		{
			data[i] = other.data[i];
		}
	}
	return *this;
}

template<class T, class R>
inline MyVector<T, R>& MyVector<T, R>::operator=(MyVector&& other)
{
	if (&other != this) {
		delete data;
		data = other.data;
		size = other.size;
		capacity = other.capacity;
		other.data = nullptr;
		other.size = 0;
		other.capacity;
	}
	return *this;
}

template<class T, class R>
inline void MyVector<T, R>::AddElement(T element)
{
	size++;
	if (size > capacity) {
		resize();
	}
	data[size - 1] = element;
}

template<class T, class R>
inline T* MyVector<T, R>::operator[](int index)
{
	return data[index];
}

template<class T, class R>
inline void MyVector<T, R>::apply(R(*func)(T&))
{
	for (int i = 0; i < size; i++)
	{
		func(data[i]);
	}
}

