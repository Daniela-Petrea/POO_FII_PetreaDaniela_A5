#include "Ford.h"
#include <iostream>
#include <string.h>
#include <stdio.h> 

Ford::Ford()
{
	carname = new char[strlen("Ford" + 1)];
	memcpy(carname, "Ford", strlen("Ford") + 1);
	fuelcapacity = 90;
	fuelconsumption = 50;
	if (Weather::Rain)
		speed = 60;
	if (Weather::Sunny)
		speed = 110;
	if (Weather::Snow)
		speed = 40;
	racetime = 0;
	raceconsumption = 0;
}
Ford::~Ford()
{
	delete[] carname;
}
char* Ford::getcarname()
{
	return carname;
}
int Ford::getfuelcapacity()
{
	return fuelcapacity;
}
int Ford::getfuelconsumption()
{
	return fuelconsumption;
}
int Ford::getspeed()
{
	return speed;
}
void Ford::setracetime(double time)
{
	this->racetime = time;
}
double Ford::getracetime()
{
	return racetime;
}
void Ford::setraceconsumption(double consumption)
{
	this->raceconsumption = consumption;
}
double Ford::getraceconsumption()
{
	return raceconsumption;
}
