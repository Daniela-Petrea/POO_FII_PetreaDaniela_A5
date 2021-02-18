#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int n=0;
FILE* fp;
if (fopen_s(&fp, "in.txt", "r") != 0)
{
    printf("Eroare. Nu am putut deschide fisierul\n");
}
else {
    printf("Am deschis fisierul cu success!\n");
    char myString[200];
        while (fgets(myString, 200, fp))
        {
            myString[strlen(myString)] = '\0';
            printf("Am citit din fisier: %s\n", myString);
            n = n + atoi(myString);
        }
    }
printf("Valoarea lui n este: %d\n", n);
system("pause");
return 0;
}
