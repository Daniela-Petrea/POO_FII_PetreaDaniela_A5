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
	rainspeed = 90;
	sunnyspeed = 130;
	snowspeed = 80;
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
int Mazda::getrainspeed()
{
	return rainspeed;
}
int Mazda::getsunnyspeed()
{
	return sunnyspeed;
}
int Mazda::getsnowspeed()
{
	return snowspeed;
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

