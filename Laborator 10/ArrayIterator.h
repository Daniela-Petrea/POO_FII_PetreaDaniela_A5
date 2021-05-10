#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;
template<class T>

class ArrayIterator

{

private:
	T* vector;
	int Current; // mai adaugati si alte date si functii necesare pentru iterator

public:

	ArrayIterator();

	ArrayIterator& operator ++ (){ vector++; return *this; };

	ArrayIterator& operator -- () { vector--; return *this; };

	bool operator= (ArrayIterator<T>&);

	bool operator!=(ArrayIterator<T>&) { return Current != m.Current; }

	T* GetElement(){ return *vector; }

};
