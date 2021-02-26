#pragma once
#include <stdio.h>
class MyClass
{
	float notaMate;
	float notaEngleza;
	float notaIstorie;
	char nume[20];

public:

	MyClass();
	~MyClass();

	void setNotaMate(float my_grade1);
	float getNotaMate();
	void setNotaEngleza(float my_grade2);
	float getNotaEngleza();
	void setNotaIstorie(float my_grade3);
	float getNotaIstorie();
	float getMedie();
	void setNume(char* nume);
	char* getNume();
};