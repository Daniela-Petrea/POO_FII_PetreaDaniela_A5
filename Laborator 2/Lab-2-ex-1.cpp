#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "NumberList.h"
using namespace std;

int main()
{
	//instantiere <tipul_clasei> <nume_obiect>
	NumberList obiectulMeu;
	printf("Obiect initial: %d\n", obiectulMeu.Init());
	obiectulMeu.Add(25);
	NumberList obiectulMeu2;
	printf("Obiect initial: %d\n", obiectulMeu2.Init());
	obiectulMeu2.Add(27);
	obiectulMeu2.Sort();
	printf("Obiect modificat: %d\n", obiectulMeu2.Print());
	system("pause");
	return 0;
}