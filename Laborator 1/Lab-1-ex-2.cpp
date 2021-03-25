#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int functie(char myString[])
{
    int nr = 0, i = 0;
    while (myString[i] != '\0')
    {
        nr *= 10;
        nr += (myString[i] - '0');
        i++;
    }
    return nr;
}
int main()
{
    int n = 0;
    FILE* fp = fopen("in.txt", "r");
    while (feof(fp) == 0)
    {
        char myString[10] = "\0";
        fscanf(fp, "%s", myString);
        n = functie(myString) + n;
    }
    printf("Valoarea lui n este: %d\n", n);
    system("pause");
    return 0;
}
