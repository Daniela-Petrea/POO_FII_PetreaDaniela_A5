#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <iostream>
#include <string.h>
#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
using namespace std;

Sort::Sort(int numar_elemente, int min_element, int max_element) {
	this->count = numar_elemente;
	numbers = new int[this->count];
	for (int i = 0; i < this->count; i++) {
		numbers[i] = (rand() % (max_element - min_element)) + min_element;
	}

}


Sort::Sort(int* vector, int numar_elemente) {
	this->count = numar_elemente;
	numbers = new int[this->count];
	for (int i = 0; i < this->count; i++) {
		numbers[i] = vector[i];
	}
}

Sort::Sort(int counts, ...) {
	numbers = new int[counts];
	count = counts;
	va_list vl;
	va_start(vl, counts);
	for (int i = 0; i < counts; i++)
	{
		numbers[i] = va_arg(vl, int);
	}
	va_end(vl);
}

Sort::Sort(char* c) {
	//int c_length = strlen(c);
	this->numbers = (int*)malloc(0 * sizeof(int));
	this->count = 0;
	char* p;
	p = strtok(c, ",");
	int i = 0;
	while (p)
	{
		this->count++;
		this->numbers = (int*)realloc(this->numbers, count * sizeof(int));
		this->numbers[i] = atoi(p);
		i++;
		p = strtok(NULL, ",");
	}
}

Sort::Sort() : numbers(new int[6]{ 5, 2, 6, 4, 3, 1 }) {
	this->count = 6;
};


void Sort::InsertSort(bool ascendent ) {
	int i, key, j;
	for (i = 1; i < this->count; i++)
	{
		key = this->numbers[i];
		j = i - 1;
		if (ascendent == false)
		{
			while (j >= 0 && this->numbers[j] < key)
			{
				this->numbers[j + 1] = this->numbers[j];
				j = j - 1;
			}
			this->numbers[j + 1] = key;
		}
		else
		{
			while (j >= 0 && this->numbers[j] > key)
			{
				this->numbers[j + 1] = this->numbers[j];
				j = j - 1;
			}
			this->numbers[j + 1] = key;
		}

	}
}

int Sort::partition(int low, int high, bool ascendent)
{
	int pivot = numbers[high];
	int aux;
	int i = low - 1;
	for (int j = low; j <= high - 1; j++)
	{
		if (ascendent == false)
		{
			if (numbers[j] > pivot)
			{
				i++;
				aux = numbers[i];
				numbers[i] =numbers[j];
				numbers[j] = aux;
			}
		}
		else
		{
			if (numbers[j] < pivot)
			{
				i++;
				aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
		}
	}
	aux = numbers[i + 1];
	numbers[i + 1] = numbers[high];
	numbers[high] = aux;
	return(i + 1);
}

void Sort::quicksort(int low, int high, bool ascendent)
{
	if (low < high)
	{
		int p = partition(low, high, ascendent);
		quicksort(low, p - 1, ascendent);
		quicksort(p + 1, high, ascendent);
	}
}

void Sort::QuickSort(bool ascendent ) {
        quicksort(0, count - 1, ascendent);
}

void Sort::BubbleSort(bool ascendent) {
	int schimb, ok = 0;
	while (ok == 0)
	{
		ok = 1;
		for (int i = 0; i < this->count - 1; i++)
		{
			if (ascendent == true)
			{

				if (this->numbers[i] > this->numbers[i + 1])
				{
					schimb = this->numbers[i];
					this->numbers[i] = this->numbers[i + 1];
					this->numbers[i + 1] = schimb;
					ok = 0;
				}
			}
			else
			{

				if (this->numbers[i] < this->numbers[i + 1])
				{
					schimb = this->numbers[i];
					this->numbers[i] = this->numbers[i + 1];
					this->numbers[i + 1] = schimb;
					ok = 0;
				}
			}
		}
	}
}

void Sort::Print()
{
	for (int index = 0; index < this->count; index++)
		cout << this->numbers[index] << " ";
	cout << endl;
}

int Sort::GetElementsCount()
{
	return count;

}

int Sort::GetElementFromIndex(int index)
{
	if (index >= 0 && index < count)
		return numbers[index];
	else return -1;
}

