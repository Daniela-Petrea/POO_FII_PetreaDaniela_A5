#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Car.h"
class Dacia :public Car
{
public:
	Dacia();
	~Dacia();
	char* getcarname();
	int getfuelcapacity();
	int getfuelconsumption();
	int getspeed();
	void setracetime(double time);
	double getracetime();
	void setraceconsumption(double consumare);
	double getraceconsumption();
};

