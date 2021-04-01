#include <stdio.h>
#include <iostream>
#include "Vector.h"
using namespace std;
int main()
{
	Vector<int, 6> v;
	int nr = 9;
	v.Push(4);
	v.Push(2);
	v.Push(17);
	v.Push(9);
	v.Push(12);
	v.print();
	v.firstIndexOf(nr, equal);
	v.remove(4);
	v.print();
	v.insert(13, 2);
	v.print();
	v.sort(issorted);
	v.print();
	v.metod(90, 3);
	v.print();
	v.get();
}

