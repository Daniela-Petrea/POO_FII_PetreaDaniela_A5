#pragma once
#include "Compare.h"
#include "OutOfIndexException.cpp"
#include "FullListException.cpp"
template<class T>
class Array

{

private:

	T** List; // lista cu pointeri la obiecte de tipul T*

	int Capacity; // dimensiunea listei de pointeri

	int Size; // cate elemente sunt in lista

public:


	Array() // Lista nu e alocata, Capacity si Size = 0
	{
		this->Size == 0;
		this->Capacity == 0;
	}
	~Array() // destructor
	{
		delete List;
	}
	Array(int capacity)// Lista e alocata cu 'capacity' elemente
	{

		this->Size = 0;
		this->Capacity = capacity;
		List = (T**)malloc(sizeof(T**) * capacity);
	}
	
	
	 T& operator[] (int index)// arunca exceptie daca index este out of range
	{
		exceptie2 index_out_of_bounds;
		int i;
		try
		{
			if (index < 0 || index > this->Size)
			{
				throw index_out_of_bounds;
			}
			return List[index];
		}
		catch (exception& e)
		{
			cout << "Exceptie: " << e.what() << endl;
		}
	}


	const Array<T>& operator+=(const T& newElem) // adauga un element de tipul T la sfarsitul listei si returneaza this
	{
		exceptie1 e;
		try
		{
			if (this->Size == this->Capacity)
			{

				throw e;
			}

			List[this->Size] = newElem;
			this->Size++;
		}
		catch (exception& e)
		{
			cout << "Exceptie: " << e.what() << endl;

		}
		return *this;
	}
	
	
	const Array<T>& Insert(int index,  T& newElem) // adauga un element pe pozitia index, retureaza this. Daca index e invalid arunca o exceptie
	{
		exceptie2 index_out_of_bounds;
		try
		{
			if (index < 0 || index > this->Size)
			{
				throw index_out_of_bounds;
			}
			else
			{

				for (int i = this->Size; i >= index; i--)
					List[i + 1] = List[i];
				Size++;
				if(newElem!=NULL)
				*List[index] = newElem;
			}
		}
		catch (exception& e)

		{

			cout << "Exceptie: " << e.what() << endl;

		}
		return *this;
	}
	void Sort() {
		int aux;
		for (int i = 0; i < this->Size - 1; ++i)
			for (int j = i + 1; j < this->Size; ++j)
				if (List[i] > List[j])
				{
					aux = List[i];
					List[i] = List[j];
					List[j] = aux;
				}
	}
	void Sort(Compare* comparator)// sorteaza folosind un obiect de comparatie
	{
		for (int i = 0; i < this->Size; i++)
			for (int j = i + 1; j < this->Size; j++)
				if (comparator->CompareElements(this->List[i], this->List[j]))
				{
					T aux = *this->List[i];
					*this->List[i] = *this->List[j];
					*this->List[j] = aux;
				}
	}
	int BinarySearch(const T& elem)
	{
		int stanga = 0;
		int dreapta = this->Size - 1;

		while (stanga < dreapta)
		{
			int mijloc = (stanga + dreapta) / 2;

			if (List[mijloc] == elem)
				return mijloc;

			if (elem > List[mijloc])
				stanga = mijloc + 1;
			else
				dreapta = mijloc - 1;
		}

		return -1;
	}
	int Find(const T& elem) // cauta un element in Array
	{
		for (int i = 0; i < this->Size; ++i)
			if (*List[i] == elem)
				return elem;

		return -1;
	}
	int GetSize()
	{
		return this->Size;
	}
	int GetCapacity()
	{
		return this->Capacity;
	}
	/*
	int ArrayIterator<T> GetBeginIterator()
	{ ArrayIterator<T> tmp; 
	tmp.Current = &list[0]; 
	return tmp; }

	int ArrayIterator<T> GetEndIterator()
	 { ArrayIterator<T> tmp; 
	tmp.Current = &list[this->size];
	return tmp; } 
	*/

};