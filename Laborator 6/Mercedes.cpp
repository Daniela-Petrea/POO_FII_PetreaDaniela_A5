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
	rainspeed = 90;
	sunnyspeed = 110;
	snowspeed = 30;
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
int Mercedes::getrainspeed()
{
	return rainspeed;
}
int Mercedes::getsunnyspeed()
{
	return sunnyspeed;
}
int Mercedes::getsnowspeed()
{
	return snowspeed;
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

