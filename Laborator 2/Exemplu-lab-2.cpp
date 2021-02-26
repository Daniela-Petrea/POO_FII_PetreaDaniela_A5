#include "MyClass.h"
#include "Globals.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
	MyClass f1;
	MyClass f2;
	MyClass f3;
	f1.setNotaMate((float)5.5);
	f1.setNotaEngleza((float)6.89);
	f1.setNotaIstorie((float)8.75);
	f1.setNume((char*)"Student1");
	f2.setNotaMate((float)7.25);
	f2.setNotaEngleza((float)6.89);
	f2.setNotaIstorie((float)8.23);
	f2.setNume((char*)"Student2");
	f3.setNotaMate((float)10);
	f3.setNotaEngleza((float)9.12);
	f3.setNotaIstorie((float)8.345679);
	f3.setNume((char*)"Student3");

	printf("F1| nume: %s | nota mate: %f | nota engleza: %f  | nota istorie: %f| nota medie: %f\n", f1.getNume(), f1.getNotaMate(), f1.getNotaEngleza(), f1.getNotaIstorie(), f1.getMedie());
	printf("F2| nume: %s | nota mate: %f | nota engleza: %f  | nota istorie: %f| nota medie: %f\n", f2.getNume(), f2.getNotaMate(), f2.getNotaEngleza(), f2.getNotaIstorie(), f2.getMedie());
	printf("F3| nume: %s | nota mate: %f | nota engleza: %f  | nota istorie: %f| nota medie: %f\n", f3.getNume(), f3.getNotaMate(), f3.getNotaEngleza(), f3.getNotaIstorie(), f3.getMedie());

	int valoare_comparare = MyComparator1(&f1, &f2);
	printf("Valoare comparare mate: %d\n", valoare_comparare);
	valoare_comparare = MyComparator2(&f1, &f2);
	printf("Valoare comparare nota engleza: %d\n", valoare_comparare);
	valoare_comparare = MyComparator3(&f1, &f2);
	printf("Valoare comparare nota istorie: %d\n", valoare_comparare);
	valoare_comparare = MyComparator4(&f1, &f2);
	printf("Valoare comparare medie: %d\n", valoare_comparare);
	valoare_comparare = MyComparator5(&f1, &f2);
	printf("Valoare comparare nume: %d\n", valoare_comparare);

	system("pause");
	return 0;
}