#include <iostream>

// 1.
template <typename T>
class Sorted {
	int size;
	int capacity;
	T* arr;
	void resize();
	void addAtIndex(int index, T& elem);
	void removeArIndex(int index);
public:
	Sorted();
	Sorted(const Sorted<T>& other);
	Sorted(Sorted<T>&& other);
	Sorted& operator=(const Sorted<T>& other);
	Sorted& operator=(Sorted<T>&& other);
	~Sorted();
	void add(T& elem);
	void remove(T& elem);
	void print();
};
//2.
enum class QATYPE {automation, manualTester};
class Worker {
	char* name;
	int internship;
	int salary;
};

class ITSpecialist:public Worker {
	char* project;
};

class QA : public ITSpecialist {
	QATYPE type;
};

class Programmer : public ITSpecialist {
	char* programmingLanguage;
};

class Manager : public Worker {
	int peopleManaging;
};
// 3. 
class Shape {
	char* type;
};
class Rectangle : public Shape {
	int width;
	int height;
};
class ColoredRectangle : public Rectangle {
	char* color;
};
class Square :public Shape {
	int side;
};
class Triangle : public Shape {
	int side1;
	int side2;
	int side3;
};

// Testing
int main()
{
	Sorted<int> sor;
	int a = 3;
	int b = 4;
	int c = 5;
	int d = 4;
	int e = 5;
	sor.add(a);
	sor.add(b);
	sor.add(c);
	sor.add(d);
	sor.add(e);
	sor.add(e);
	sor.add(a);
	sor.remove(b);
	sor.print();
 	return 0;
}

// 1.
template<typename T>
Sorted<T>::~Sorted()
{
	delete[] arr;
}

template<typename T>
void Sorted<T>::add(T& elem)
{
	size++;
	if (size > capacity) {
		resize();
	}
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] >= elem) {
			addAtIndex(i, elem);
			return;
		}
	}	
	arr[size - 1] = elem;
}

template<typename T>
void Sorted<T>::remove(T& elem)
{
	for (int i = 0; i < size; i++)
	{
		if (elem == arr[i]) {
			size--;
			removeArIndex(i);
		}
	}
}

template<typename T>
void Sorted<T>::print()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

template<typename T>
void Sorted<T>::resize()
{
	capacity *= 2;
	T* newArr = new T[capacity];
	for (int i = 0; i < size; i++)
	{
		newArr[i] = arr[i];
	}
	delete[] this->arr;
	this->arr = newArr;
}

template<typename T>
void Sorted<T>::addAtIndex(int index, T& elem)
{
	for (int i = size - 1; i > index; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[index] = elem;
}

template<typename T>
void Sorted<T>::removeArIndex(int index)
{
	for (int i = index; i < size - 1; i++)
	{
		arr[i-1] = arr[i];
	}
}

template<typename T>
Sorted<T>::Sorted()
{
	size = 0;
	capacity = 64;
	arr = new T[capacity];
}

template<typename T>
Sorted<T>::Sorted(const Sorted<T>& other)
{
	size = other.size;
	capacity = other.capacity;
	arr = new T[capacity];
	for (int i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
}

template<typename T>
Sorted<T>::Sorted(Sorted<T>&& other)
{
	size = other.size;
	capacity = other.capacity;
	arr = other.arr;
	other.arr = nullptr;
	other.size = 0;
	other.capacity = 0;
}

template<typename T>
Sorted<T>& Sorted<T>::operator=(const Sorted<T>& other)
{
	if (other != &other) {

		delete[] this->arr;
		this->size = other.size;
		this->capacity = other.capacity;
		this->arr = new T[capacity];
		for (int i = 0; i < size; i++)
		{
			this->arr[i] = other.arr[i];
		}
	}
	return *this;
}

template<typename T>
Sorted<T>& Sorted<T>::operator=(Sorted<T>&& other)
{
	if (other != &other) {

		delete[] this->arr;
		this->size = other.size;
		this->capacity = other.capacity;
		this->arr = other.arr;
		other.size = 0;
		other.capacity = 0;
		other.arr = nullptr;
	}
	return *this;
}
// 2.

