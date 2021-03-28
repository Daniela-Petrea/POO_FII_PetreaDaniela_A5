#include "Toyota.h"
#include <iostream>
#include <string.h>
#include <stdio.h> 

Toyota::Toyota()
{
	carname = new char[strlen("Toyota" + 1)];
	memcpy(carname, "Toyota", strlen("Toyota") + 1);
	fuelcapacity = 60;
	fuelconsumption = 40;
	if (Weather::Rain)
		speed = 40;
	if (Weather::Sunny)
		speed = 60;
	if (Weather::Snow)
		speed = 30;
	racetime = 0;
	raceconsumption = 0;
}
Toyota::~Toyota()
{
	delete[] carname;
}
char* Toyota::getcarname()
{
	return carname;
}
int Toyota::getfuelcapacity()
{
	return fuelcapacity;
}
int Toyota::getfuelconsumption()
{
	return fuelconsumption;
}
int Toyota::getspeed()
{
	return speed;
}
void Toyota::setracetime(double time)
{
	this->racetime = time;
}
double Toyota::getracetime()
{
	return racetime;
}
void Toyota::setraceconsumption(double consumption)
{
	this->raceconsumption = consumption;
}
double Toyota::getraceconsumption()
{
	return raceconsumption;
}
