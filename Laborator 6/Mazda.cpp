#include "Mazda.h"
#include <iostream>
#include <string.h>
#include <stdio.h> 

Mazda::Mazda()
{
	carname = new char[strlen("Mazda" + 1)];
	memcpy(carname, "Mazda", strlen("Mazda") + 1);
	fuelcapacity = 150;
	fuelconsumption = 130;
	if (Weather::Rain)
	speed = 90;
	if (Weather::Sunny)
	speed = 130;
	if (Weather::Snow)
	speed = 80;
	racetime = 0;
	raceconsumption = 0;
}
Mazda::~Mazda()
{
	delete[] carname;
}
char* Mazda::getcarname()
{
	return carname;
}
int Mazda::getfuelcapacity()
{
	return fuelcapacity;
}
int Mazda::getfuelconsumption()
{
	return fuelconsumption;
}
int Mazda::getspeed()
{
	return speed;
}
void Mazda::setracetime(double time)
{
	this->racetime = time;
}
double Mazda::getracetime()
{
	return racetime;
}
void Mazda::setraceconsumption(double consumption)
{
	this->raceconsumption = consumption;
}
double Mazda::getraceconsumption()
{
	return raceconsumption;
}
