#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Car.h"

class Mazda : public Car
{
	public:
		Mazda();
		~Mazda();
		char* getcarname();
		int getfuelcapacity();
		int getfuelconsumption();
		int getspeed();
		void setracetime(double time);
		double getracetime();
		void setraceconsumption(double consumare);
		double getraceconsumption();
};

