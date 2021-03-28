#include "Mercedes.h"
#include <iostream>
#include <string.h>
#include <stdio.h> 

Mercedes::Mercedes()
{
	carname = new char[strlen("Mercedes" + 1)];
	memcpy(carname, "Mercedes", strlen("Mercedes") + 1);
	fuelcapacity = 120;
	fuelconsumption = 100;
	if (Weather::Rain)
		speed = 99;
	if (Weather::Sunny)
		speed = 133;
	if (Weather::Snow)
		speed = 86;
	racetime = 0;
	raceconsumption = 0;
}
Mercedes::~Mercedes()
{
	delete[] carname;
}
char* Mercedes::getcarname()
{
	return carname;
}
int Mercedes::getfuelcapacity()
{
	return fuelcapacity;
}
int Mercedes::getfuelconsumption()
{
	return fuelconsumption;
}
int Mercedes::getspeed()
{
	return speed;
}
void Mercedes::setracetime(double time)
{
	this->racetime = time;
}
double Mercedes::getracetime()
{
	return racetime;
}
void Mercedes::setraceconsumption(double consumption)
{
	this->raceconsumption = consumption;
}
double Mercedes::getraceconsumption()
{
	return raceconsumption;
}
