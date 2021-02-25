#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "NumberList.h"
using namespace std;

int main()
{
	NumberList obj;
	obj.Init();
	obj.Add(25);
	obj.Add(12);
	obj.Add(2);
	obj.Add(45);
	obj.Add(27);
	obj.Print();
	obj.Sort();
	obj.Print();
	system("pause");
	return 0;
}
