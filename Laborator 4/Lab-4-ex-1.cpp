#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <iostream>
#include <stdlib.h>

int main() {
	Sort c1(10, 10, 100);
	c1.Print();
	int nr=c1.GetElementsCount();
	cout <<"Vectorul are "<< nr<< " elemente";
	cout << endl;
	int rez=c1.GetElementFromIndex(2);
	cout <<"Al 3 lea element este "<< rez;
	cout << endl;
	int v[5] = {2, 1, 5, 3, 4 };
	Sort c2(v, 5);
	c2.Print();
	cout << "Vectorul ordonat este ";
	c2.QuickSort(true);
	c2.Print();
	Sort c3(6, 6, 3, 4, 2, 5, 1);
	c3.Print();
	c3.InsertSort(true);
	cout << "Vectorul ordonat este ";
	c3.Print();
	char c[] = "12,4,56,8";
	Sort c4(c);
	c4.Print();
	c4.BubbleSort(true);
	cout << "Vectorul ordonat este ";
	c4.Print();
	Sort c5;
	c5.Print();
	c5.QuickSort(true);
	cout << "Vectorul ordonat este ";
	c5.Print();
	system("pause");
	return 0;
}
