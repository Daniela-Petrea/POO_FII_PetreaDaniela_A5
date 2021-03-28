#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Car.h"
#include "Weather.h"

class Circuit
{
	Car** car;
	int currentIndex;
	int maxIndex;
	int weather;
	double lungime;
public:
	Circuit();
	~Circuit();
	void SetLength(double length);
	void SetWeather(Weather set_weather);
	bool AddCar(Car* pointer);
	void Race();
	void ShowFinalRanks(); 
	void ShowWhoDidNotFinish(); 
};

