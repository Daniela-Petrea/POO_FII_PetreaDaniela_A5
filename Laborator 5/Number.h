#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Number.h"
class Number

{
	int baza;
	char* valoare;

public:

	Number(const char* value, int base); // where base is between 2 and 16

	~Number();

	//int operator[](int index);

	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base

};

