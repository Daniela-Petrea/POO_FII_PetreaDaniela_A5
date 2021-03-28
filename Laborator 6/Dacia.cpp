#include "Dacia.h"
#include <iostream>
#include <string.h>
#include <stdio.h> 
Dacia::Dacia()
{
	carname = new char[strlen("Dacia" + 1)];
	memcpy(carname, "Dacia", strlen("Dacia") + 1);
	fuelcapacity = 50;
	fuelconsumption = 70;
	if(Weather::Rain)
	speed = 80;
	if (Weather::Sunny)
	speed = 110;
	if (Weather::Snow)
	speed = 30;
	racetime = 0;
	raceconsumption = 0;
}
Dacia::~Dacia()
{
	delete[] carname;
}
char* Dacia::getcarname()
{
	return carname;
}
int Dacia::getfuelcapacity()
{
	return fuelcapacity;
}
int Dacia::getfuelconsumption()
{
	return fuelconsumption;
}
int Dacia::getspeed()
{
	return speed;
}
void Dacia::setracetime(double time)
{
	this->racetime = time;
}
double Dacia::getracetime()
{
	return racetime;
}
void Dacia::setraceconsumption(double consumption)
{
	this->raceconsumption = consumption;
}
double Dacia::getraceconsumption()
{
	return raceconsumption;
}
