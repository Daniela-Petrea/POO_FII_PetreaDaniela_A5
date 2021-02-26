#pragma once
#include "Globals.h"
#include <string.h>
#include <stdio.h>

int MyComparator1(MyClass* obiect1, MyClass* obiect2) {
	float nota1 = obiect1->getNotaMate();
	float nota2 = obiect2->getNotaMate();
	if (nota1 == nota2)
		return 0;
	if (nota1 > nota2)
		return 1;
	if (nota1 < nota2)
		return -1; 
}
int MyComparator2(MyClass* obiect1, MyClass* obiect2) {
	float nota1 = obiect1->getNotaEngleza();
	float nota2 = obiect2->getNotaEngleza();
	if (nota1 == nota2)
		return 0;
	if (nota1 > nota2)
		return 1;
	if (nota1 < nota2)
		return -1;
}
int MyComparator3(MyClass* obiect1, MyClass* obiect2) {
	float nota1 = obiect1->getNotaIstorie();
	float nota2 = obiect2->getNotaIstorie();
	if (nota1 == nota2)
		return 0;
	if (nota1 > nota2)
		return 1;
	if (nota1 < nota2)
		return -1;
}
int MyComparator4(MyClass* obiect1, MyClass* obiect2) {
	float nota1 = obiect1->getMedie();
	float nota2 = obiect2->getMedie();
	if (nota1 == nota2)
		return 0;
	if (nota1 > nota2)
		return 1;
	if (nota1 < nota2)
		return -1;
}
int MyComparator5(MyClass* obiect1, MyClass* obiect2) {
	char nume1[20], nume2[20];
	strcpy_s(nume1, 20, obiect1->getNume());
	strcpy_s(nume2, 20, obiect2->getNume());
	if (strcmp(nume1, nume2) == 1)
		return 0;
	if (strcmp(nume1, nume2) > 1)
		return 1;
	if (strcmp(nume1, nume2) < 1)
		return -1;
}

