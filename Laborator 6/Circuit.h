#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Car.h"
#include <stdlib.h>
class Circuit
{
	Car** car;
	int currentIndex;
	int maxIndex;
	int lungime;
public:
	Circuit();
	~Circuit();
	int SetLength(int length);
	//int SetWeather;
	bool AddCar(Car* pointer);
	void Race();
	void ShowFinalRanks(); 
	void ShowWhoDidNotFinish(); 

};

