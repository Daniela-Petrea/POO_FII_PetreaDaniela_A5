#pragma once
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
using namespace std;

class Car 
{
protected:
	char* carname;
	int fuelcapacity;
	int fuelconsumption;
	int rainspeed;
	int sunnyspeed;
	int snowspeed;
	double racetime;
	double raceconsumption;
public:
	bool terminare;
	virtual char* getcarname() = 0;
	virtual int getfuelcapacity() = 0;
	virtual int getfuelconsumption() = 0;
	virtual int getrainspeed() = 0;
	virtual int getsunnyspeed() = 0;
	virtual int getsnowspeed() = 0;
	virtual void setracetime(double time) = 0;
	virtual double getracetime()=0;
	virtual void setraceconsumption(double consumption) = 0;
	virtual double getraceconsumption() = 0;
};
