#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Number.h"
using namespace std;
int main()

{
    Number n1("10110010", 2);
    Number n2("734", 8);
    Number n3("FF", 16);
    printf("n1 has %d digits and it is written in base %d\n", n1.GetDigitsCount(), n1.GetBase());
    printf("n2 has %d digits and it is written in base %d\n", n2.GetDigitsCount(), n2.GetBase());
    printf("n3 has %d digits and it is written in base %d\n", n3.GetDigitsCount(), n3.GetBase());
    n1.Print();
    n2.Print();
    n3.Print();
    n3.SwitchBase(2);
    n3.Print();
}
