#include <stdio.h>
#include <iostream>
#include "Sort.h"
using namespace std;
int main()
{
	Sort<int> v;
	v.Push(4);
	v.Push(2);
	v.Push(17);
	v.Push(9);
	v.Push(12);
	v.print();
	v.InsertSort(true);
	v.print();
	return 0;
}
