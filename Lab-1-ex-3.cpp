#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char newString[10][10];
    char aux[10] = " ";
    int i, j, ctr;
    printf("Introdu o propozitie :\n");
    scanf("%[^\n]", str);
    j = 0; ctr = 0;
    for (i = 0; i <= (strlen(str)); ++i)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            newString[ctr][j] = '\0';
            ctr++;
            j = 0;
        }
        else
        {
            newString[ctr][j] = str[i];
            j++;
        }
    }
    for (i = 0; i < ctr - 1; ++i)
    {
        for (j = i + 1; j < ctr; ++j) {
            if ((strlen(newString[i]) < strlen(newString[j])) || ((strlen(newString[i]) == strlen(newString[j])) && (strcmp(newString[i], newString[j]) > 0))) {
                strcpy(aux, newString[i]);
                strcpy(newString[i], newString[j]);
                strcpy(newString[j], aux);
            }
        }
    }
    for (i = 0; i < ctr; ++i)
    {
        printf(" %s\n", newString[i]);
    }
    return 0;
}
