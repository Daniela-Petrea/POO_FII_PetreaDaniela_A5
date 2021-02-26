#include "MyClass.h"
#include <string.h>
#include <stdio.h>

void MyClass::setNotaMate(float my_grade1) {
	if(my_grade1 >=1 && my_grade1 <=10)
	this->notaMate = my_grade1;
}

float MyClass::getNotaMate() {
	return this->notaMate;
}

void MyClass::setNotaEngleza(float my_grade2) {
	if (my_grade2 >= 1 && my_grade2 <= 10)
		this->notaEngleza = my_grade2;
}

float MyClass::getNotaEngleza() {
	return this->notaEngleza;
}

void MyClass::setNotaIstorie(float my_grade3) {
	if (my_grade3 >= 1 && my_grade3 <= 10)
		this->notaIstorie = my_grade3;
}

float MyClass::getNotaIstorie() {
	return this->notaIstorie;
}

float MyClass::getMedie() {
	return (this->notaMate + this->notaEngleza + this->notaIstorie) / 3.0;
}
void MyClass::setNume(char* nume) {
	strcpy_s(this->nume, 20, nume);
}

char* MyClass::getNume() {
	return this->nume;
}

//implementare constructor <nume_clasa>::<nume_clasa>(<parametri>)
MyClass::MyClass() {
	printf("Am apelat constructorul pentru clasa MyClass\n");
	this->notaMate = 0; 
	this->notaEngleza = 0;
	this->notaIstorie = 0;
}

//implementare destructor <nume_clasa>::~<nume_clasa>(<parametri>)
MyClass::~MyClass() {
	printf("Am apelat destructorul pentru clasa MyClass\n");
}