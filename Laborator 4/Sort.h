#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <iostream>
#include <string.h>
#include <stdio.h> 
#include <time.h>
#include <stdlib.h>
#include <stdarg.h>
using namespace std;
class Sort

{

  int* numbers;
  int count;
  int partition(int, int, bool);
  void quicksort(int, int, bool);

public:

    Sort(int numar_elemente, int min_element, int max_element);
    Sort(int* vector, int numar_elemente);
    Sort(int counts, ...);
    Sort(char* c);
    Sort();
    void QuickSort(bool ascendent = false);
    
    void InsertSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};

