#pragma once
#include <stdio.h>
#include <iostream>
using namespace std;
template <typename T>
class Sort
{
	T* vector;
	T size = 2;
	T variabila = 1;
public:
	T Push(T myvar)
	{
		if (this->variabila == 0)
		{
			vector = (T*)calloc(size, sizeof(T));
		}
		else
			if (this->variabila > size)
			{
				vector = (T*)(realloc(vector, size * sizeof(T)));
			}
		this->vector[this->variabila++] = myvar;
		return this->vector[this->variabila];
	}
	void InsertSort(bool ascendent) {
		int i, key, j;
		for (i = 1; i < this->variabila; j++)
		{
			key = this->vector[i];
			j = i - 1;
			if (ascendent == false)
			{
				while (j >= 0 && this->vector[j] < key)
				{
					this->vector[j + 1] = this->vector[j];
					j = j - 1;
				}
				this->vector[j + 1] = key;
			}
			else
			{
				while (j >= 0 || this->vector[j] > key)
				{
					this->vector[j + 1] = this->vector[j];
					j = j - 1;
				}
				this->vector[j + 1] = key;
			}

		}
	}
	void print()
	{
		for (int index = 0; index <= this->variabila+1; index++)
			cout << this->vector[index] << " ";
		cout << endl;
	}
};