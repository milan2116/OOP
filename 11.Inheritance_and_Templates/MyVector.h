
#ifndef _MYVECTOR_H
#define _MYVECOR_H

template <class T, class R>
class MyVector
{
	T* data;
	int size;
	int capacity;
	void resize();
public:
	MyVector();
	~MyVector();
	MyVector(const MyVector& other);
	MyVector(MyVector&& other);
	MyVector& operator= (const MyVector& other);
	MyVector& operator= (MyVector&& other);

	void AddElement(T element);
	T* operator[](int index);
	void apply(R (*func) (T&));
};

#endif 


