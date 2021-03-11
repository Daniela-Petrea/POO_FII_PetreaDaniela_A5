#include "Sort.h"
#include <iostream>
#include <stdlib.h>

int main() {
	Sort c1(10, 10, 100);
	c1.Print();
	int v[5] = {2, 1, 5, 3, 4 };
	Sort c2(v, 5);
	c2.Print();
	//c2.QuickSort(true);
	c2.Print();
	Sort c3(6, 1, 2, 3, 4, 5, 6);
	c3.Print();
	c3.InsertSort(true);
	c3.Print();
	char c[] = "12,34,56,78";
	Sort c4(c);
	c4.Print();
	c4.BubbleSort(true);
	c4.Print();
	system("pause");
	return 0;
}