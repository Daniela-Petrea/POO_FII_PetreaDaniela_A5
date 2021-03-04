#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Math.h"
using namespace std;
int main()
{
	Math ex;
	cout<<ex.Add(6, 7)<<endl;
	cout<<ex.Add(6, 7, 8)<<endl;
	cout<<ex.Add(6.234, 1.12345)<<endl;
	cout<<ex.Add(6.234, 1.12345, 9.0876)<<endl;
	cout<<ex.Mul(6, 7)<<endl;
	cout<<ex.Mul(6, 7, 8)<<endl;
	cout<<ex.Mul(6.234, 1.12345)<<endl;
	cout<<ex.Mul(6.234, 1.12345, 9.0876)<<endl;
	cout<<ex.Add(6, 7, 8, 9, 10, 12)<<endl;
	cout<<ex.Add("problema 1", " de la laborator 2")<<endl;
	system("pause");
	return 0;
}
