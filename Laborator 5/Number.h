#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Number.h"
class Number

{
	int baza;
	char* valoare;
	int conversie(char *v,int b);
	
public:

	Number(const char* value, int base); // where base is between 2 and 16

	~Number();
    
	void SwitchBase(int newBase);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base

};

