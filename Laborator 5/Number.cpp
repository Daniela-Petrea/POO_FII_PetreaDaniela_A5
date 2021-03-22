#include "Number.h"
#include <cstdlib> 
#include <iostream> 
#include <stdio.h>
#include <ctype.h>
using namespace std;

int Number::conversie(char* v, int b)
{
	int nrnou=0,maxim=0,i;
	for (i = 0; i <= (strlen(v))-1; i++)
	{
		if (isupper(v[i]))
			switch (v[i]) {
			case 'A':
				maxim = 10;
				break;
			case 'B':
				maxim = 11;
				break;
			case 'C':
				maxim = 12;
				break;
			case 'D':
				maxim = 13;
				break;
			case 'E':
				maxim = 14;
				break;
			case 'F':
				maxim = 15;
				break;
			}
		if (isdigit(v[i]))
			maxim = v[i]-'0';
		nrnou = nrnou + maxim * pow(b, strlen(v)-i-1);
	}
	return nrnou;
}
void Number::SwitchBase(int newBase)
{
	int nr,nrbazanoua=0,p=1,i=0,c;
	char* m=new char[100];
	nr=conversie(this->valoare, this->baza);
	while(nr!=0)
	{
		nrbazanoua = nrbazanoua+ (nr % newBase) * p;
		nr = nr / newBase;
		p = p * 10;
	}
	while (nrbazanoua != 0)
	{
		c = (nrbazanoua % 10);
		m[i] =c +'0';
			nrbazanoua = nrbazanoua / 10;
		i++;
	}
	m[i] = '\0';
	_strrev(m);
	int size = strlen(m) + 1;
	this->valoare = (char*)realloc(this->valoare, size);
	memcpy(this->valoare, m, strlen(m) + 1);
	this->baza = newBase;
}
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
