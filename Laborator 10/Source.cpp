#include<stdio.h>
#include<iostream>
#include "Array.h"
using namespace std;


int main()
{
	int N = 12;
	Array <int>myArray(50);
	myArray.Insert(0, N);
	cout << myArray.GetSize()<<endl;
	cout << myArray.GetCapacity()<<endl;
	cout << myArray.Find(310) << endl;
	cout << endl;
	return 0;
}