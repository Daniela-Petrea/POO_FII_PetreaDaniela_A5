#include "Canvas.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

Canvas::Canvas(int weidth, int height) {
    latime = weidth;
    inaltime = height;
    matrice = (char**)malloc(inaltime * sizeof(char*));
    for (int i = 0; i < inaltime; i++)
    {
        matrice[i] = (char*)malloc(latime * sizeof(char));
    }
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < weidth; j++)
        {
            matrice[i][j] = ' ';
        }
    }
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {
    int i, j;
    for (i = 0; i <  2 * ray + 1; i++)
    {
        for (j = 0; j < 2 * ray + 1; j++)
        {
            if(((i - x) * (i - x) + (j - y) * (j - y) >= ray*ray - ray) && ((i - x) * (i - x) + (j - y) * (j - y) <= ray*ray + ray))
                matrice[i][j] = ch;
            else 
                matrice[i][j] = ' ';
        }
    }
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
    int i, j;
    for (i = 0; i < 2 * ray + 1; i++)
    {
        for (j = 0; j < 2 * ray + 1; j++)
        {
            if ((i - x) * (i - x) + (j - y) * (j - y) <= ray * ray)
                matrice[i][j] = ch;
            else
                matrice[i][j] = ' ';
        }
    }
}



void Canvas::DrawRect(int left, int top, int right, int bottom, char ch){
	DrawLine(top,left,top,right,ch);
	DrawLine(top,left,bottom,left,ch);
	DrawLine(bottom,left,bottom,right,ch);
	DrawLine(top,right,bottom,right,ch);
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
	int i, j;
	for (i = top; i <= bottom; i++)
	{
		for (j = left; j <= right; j++)
		{
			matrice[i][j] = ch;
		}
	}
}

void Canvas::SetPoint(int x, int y, char ch) {
    matrice[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    int x = x1;
    int y = y1;

    if (abs(dx) > abs(dy))
    {
        matrice[x][y] = ch;
        int pk = (2 * abs(dy)) - abs(dx);

        for (int i = 0; i < abs(dx); i++)
        {
            x = x + 1;
            if (pk < 0)
                pk = pk + (2 * abs(dy));
            else
            {
                y = y + 1;
                pk = pk + (2 * abs(dy)) - (2 * abs(dx));
            }
            matrice[x][y] = ch;
        }
    }
    else
    {
        matrice[x][y] = ch;
        int pk = (2 * abs(dx)) - abs(dy);

        for (int i = 0; i < abs(dy); i++)
        {
            y = y + 1;
            if (pk < 0)
                pk = pk + (2 * abs(dx));
            else
            {
                x = x + 1;
                pk = pk + (2 * abs(dx)) - (2 * abs(dy));
            }
            matrice[x][y] = ch;
        }
    }
}
void Canvas::Print() {
    int i, j;
    for (i = 0; i < inaltime; i++)
    {
        for (j = 0; j < latime; j++)
        {
            printf("%c", matrice[i][j]);
        }
        printf("\n");
    }
 }

void Canvas::Clear() {
    int i, j;
    for (i = 0; i < inaltime; i++)
    {
        for (j = 0; j < latime; j++)
        {
            matrice[i][j] = ' ';
        }
       
    }
}

