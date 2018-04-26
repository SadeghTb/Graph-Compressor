#pragma pack(1)

#ifndef VECTOR_H
#define VECTOR_H

#include <string>

using namespace std;
template <class T>
class  Vector
{
public:

	typedef T * iterator;

	Vector();

	~Vector();
	void push_back(const T & value);
	void pop_back();

	void reserve(unsigned  int capacity);
	void resize(unsigned int size);
	unsigned int size() const;

	T & operator[](unsigned int index);
	Vector<T> & operator=(const Vector<T> &);
	void clear();
private:
	unsigned  int my_size;
	unsigned  int my_capacity;
	T * buffer;
};

template<class T>
Vector<T>::Vector()
{
	my_capacity = 0;
	my_size = 0;
	buffer = 0;
}

template<class T>
Vector<T> & Vector<T>::operator = (const Vector<T> & v)
{
	delete[] buffer;
	my_size = v.my_size;
	my_capacity = v.my_capacity;
	buffer = new T[my_size];
	for (unsigned short int i = 0; i < my_size; i++)
		buffer[i] = v.buffer[i];
	return *this;
}

template<class T>
void Vector<T>::push_back(const T & v)
{
	if (my_size >= my_capacity){

		//cout << "this is my_capacity+add:" << (my_capacity * 2) + 1 << endl;
		
		reserve(my_capacity + 10);
	}
	buffer[my_size++] = v;
}

template<class T>
void Vector<T>::pop_back()
{
	my_size--;
}

template<class T>
void Vector<T>::reserve(unsigned int capacity)
{
	if (buffer == 0)
	{
		my_size = 0;
		my_capacity = 0;
	}
	T * Newbuffer = new T[capacity];
	//assert(Newbuffer);
	unsigned  int l_Size = capacity < my_size ? capacity : my_size;
	//copy (buffer, buffer + l_Size, Newbuffer);

	for (unsigned int i = 0; i < l_Size; i++)
		Newbuffer[i] = buffer[i];

	my_capacity = capacity;
	delete[] buffer;
	buffer = Newbuffer;
}

template<class T>
void Vector<T>::resize(unsigned int size)
{
	reserve(size);
	my_size = size;
}

template<class T>
T& Vector<T>::operator[](unsigned int index)
{
	return buffer[index];
}

template<class T>
Vector<T>::~Vector()
{
	delete[] buffer;
}

template <class T>
void Vector<T>::clear()
{
	my_capacity = 0;
	my_size = 0;
	buffer = 0;
}

template <class T>
unsigned int Vector<T>::size()const//
{
	return my_size;
}

#endif