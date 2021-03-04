#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Canvas.h"
int main()
{
    Canvas desen(20, 20);
    desen.DrawCircle(5, 5, 6, '*');
   desen.Print();
    desen.FillCircle(5, 5, 6, '^');
    desen.Print();
    desen.DrawRect(13, 3, 17, 8, '*');
    desen.Print();
    desen.FillRect(13, 3, 17, 8, '&');
    desen.SetPoint(15, 1, 'k');
    desen.DrawLine(15, 3, 15, 10, 'd');
    desen.Print();
    desen.Clear();
    desen.Print();
    system("pause");
    return 0;
}




