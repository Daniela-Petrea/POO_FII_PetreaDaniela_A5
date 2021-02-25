#include "NumberList.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

void NumberList::Init()
{
	this->count = 0;
}
bool NumberList::Add(int x)
{
	this->numbers[count] = x;
	this->count++;
	if(this->count<10)
	return true;
	else
	return false;
}
void NumberList::Sort()
{
	int schimb;
	for (int i = 0; i <= this->count - 2; i++)
	{
		for (int j = i + 1; j <= this->count - 1; j++)
		{
			if (this->numbers[i] > this->numbers[j])
			{
				schimb = this->numbers[i];
				this->numbers[i] = this->numbers[j];
				this->numbers[j] = schimb;
			}
		}

	}
}
void NumberList::Print()
{
	for (int index = 0; index < this->count; index++)
		cout<<this->numbers[index]<<" ";
	cout << endl;
}

NumberList::NumberList() {
	printf("S-a apelat constructorul\n");
	this->count = 0;
}

NumberList::~NumberList() {
	printf("S-a apelat destructorul\n");
}

