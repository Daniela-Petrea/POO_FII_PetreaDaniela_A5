#include "MyClass.h"
#include "Globals.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
	//ca sa instantiem un obiect: <numele_clase> <nume_obiect>;
	MyClass obiectulMeu1;

	//ca sa accesam atributele methodele unui obiect, aici folosim <nume_obiect>.<atribute/methode>
	printf("Valoarea initial este: %d\n", obiectulMeu1.getAge());
	obiectulMeu1.setAge(25);
	printf("Valoare lui age din obiectul meu este: %d\n", obiectulMeu1.getAge());

	MyClass obiectulMeu2;
	obiectulMeu2.setAge(26);

	int valoare_comparare = MyComparator(&obiectulMeu1, &obiectulMeu2);
	printf("Valoare comparare: %d\n", valoare_comparare);

	system("pause");
	return 0;
}