#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;
template <typename T, int size>
class Vector
{
	T* vector;
	T variabila = 0;
public:
	
	T Push(T myvar)
	{   if(this->variabila==0)
		vector= (int*)calloc(size , sizeof(int));
		if (this->variabila < size)
		{
			this->vector[this->variabila] = myvar;
			this->variabila++;
			vector = (int*)(realloc(vector, size * sizeof(int)));
		}
		return this->vector[this->variabila];
	}
	T Pop()
	{
		return this->vector[this->variabila];
	}
	T count()
	{
		return this->variabila + 1;
	}
	void metod(T myvalue, T myindex)
	{
		if (myindex < 0 || myindex > this->variabila)
		{
			cout << "Invalid\n";
		}
		else
		{
			this->vector[myindex] = myvalue;
		}
	}
	const void get()
	{
		for (int i = 0; i < this->variabila; i++)
			cout << &vector[i] << " ";
	}
	void remove(T myindex)
	{
		if (myindex < 0 || myindex > this->variabila)
		{
			cout << "Invalid\n";
		}
		else
		{
			for (int i = myindex; i < this->variabila ; i++)
			{
				this->vector[i] = this->vector[i + 1];
			}
			this->variabila--;
		}
	}
	void insert(T myvalue, T myindex)
	{
		int i;
		this->variabila++;

		for (i = this->variabila - 1; i >= myindex + 1; i--)
		{
			vector[i] = vector[i - 1];
		}
		vector[myindex] = myvalue;
	}
	void print()
	{
		for (int index = 0; index < this->variabila; index++)
			cout << this->vector[index] << " ";
		cout << endl;
	}
	void sort(bool (*issort) (T o1, T o2) = nullptr)
	{
		for (int i = 0; i <= this->variabila - 2; i++)
		{
			for (int j = i + 1; j <= this->variabila - 1; j++)
			{
				if (issort != nullptr)
				{
					if (issort(this->vector[i], this->vector[j]))
					{
						swap(vector[i], vector[j]);
					}
				}
				else
				{
					if (this->vector[i] > this->vector[j])
					{
						swap(vector[i], vector[j]);
					}
				}
			}

		}
	}
	T firstIndexOf(T obiectdecautat, bool (*isEqual) (T o1, T o2) = nullptr)
	{
		for (int i = 0; i < this->variabila; i++)
		{
			if (isEqual != nullptr)
			{
				if (isEqual(obiectdecautat, this->vector[i]))
					return i;
			}
			else
			{
				if (obiectdecautat == this->vector[i])
					return i;
			}
		}
		return -1;
	}
};

bool equal(int i1, int i2)
{
	return i1 == i2;
}


bool issorted(int i1, int i2)
{
	return i1 > i2;
}
