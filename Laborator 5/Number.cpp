#include "Number.h"
#include <cstdlib> 
#include <iostream> 
#include <stdio.h>
#include <ctype.h>
using namespace std;
void Number::Print()
{
	cout << this->valoare << " ";
}
int  Number::GetBase()
{
	return this->baza;
}
int Number::GetDigitsCount()
{
	return strlen(this->valoare);
}

Number::Number(const char* value, int base)
{
	if (base >= 2 && base <= 16)
		this->baza = base;
	else
		this->baza = -1;
	this->valoare = new char[strlen(value) + 1];
	memcpy(this->valoare, value, strlen(value) + 1);
}
Number::~Number()
{if(this->valoare != nullptr)
	delete [](this->valoare);

}