#include "Circuit.h"
#define _CRT_SECURE_NO_WARNINGS


Circuit::Circuit() {
	this->maxIndex = 5;
	this->currentIndex = 0;
	this->car = (Car**)(malloc(this->maxIndex * sizeof(Car*)));
	this->weather = 0;
	this->lungime = 0;
}

Circuit::~Circuit(){
	for (int i = 0; i < maxIndex; i++)
		delete car[i];
	delete[] car;
}

bool Circuit::AddCar(Car* pointer) {
	if (this->currentIndex < this->maxIndex) {
		this->car[this->currentIndex++] = pointer;
		return true;
	}
	return false;
}

void Circuit::SetLength(double length)
{
	this->lungime = length;
}

void Circuit::SetWeather(Weather set_weather)
{
	this->weather = set_weather;
}

void Circuit::Race()
{
	if (this->weather == 1)
	{
		for (int i = 0; i < this->maxIndex; i++)
		{
			double time = ((1.0) * lungime) / (car[i]->getrainspeed());
			car[i]->setracetime(time);
			double consumption = ((1.0) * car[i]->getfuelconsumption() * lungime) / 100;
			car[i]->setraceconsumption(consumption);
			if (consumption < car[i]->getfuelcapacity())
				car[i]->terminare = 1;
			else
				car[i]->terminare = 0;
		}
	}
	if (this->weather == 1)
	{
		for (int i = 0; i < this->maxIndex; i++)
		{
			double time = ((1.0) * lungime) / (car[i]->getsunnyspeed());
			car[i]->setracetime(time);
			double consumption = ((1.0) * car[i]->getfuelconsumption() * lungime) / 100;
			car[i]->setraceconsumption(consumption);
			if (consumption < car[i]->getfuelcapacity())
				car[i]->terminare = 1;
			else
				car[i]->terminare = 0;
		}
	}
	if (this->weather == 1)
	{
		for (int i = 0; i < this->maxIndex; i++)
		{
			double time = ((1.0) * lungime) / (car[i]->getsnowspeed());
			car[i]->setracetime(time);
			double consumption = ((1.0) * car[i]->getfuelconsumption() * lungime) / 100;
			car[i]->setraceconsumption(consumption);
			if (consumption < car[i]->getfuelcapacity())
				car[i]->terminare = 1;
			else
				car[i]->terminare = 0;
		}
	}

}

void Circuit::ShowFinalRanks() {
	for (int i = 0; i < this->maxIndex - 1; i++)
	{
		for (int j = i + 1; j < maxIndex; j++)
		{
			if (car[i]->getracetime() > car[j]->getracetime())
			{
				Car* aux = car[i];
				car[i] = car[j];
				car[j] = aux;
			}
		}
	}
	for (int i = 0; i < this->maxIndex; i++)
		if (car[i]->terminare != 0)
		cout << car[i]->getcarname()<< " ";
	cout << endl;
}
void Circuit::ShowWhoDidNotFinish()
{
	for (int i = 0; i < this->maxIndex; i++)
	{
		if(car[i]->terminare==0)
         cout << car[i]->getcarname() << " ";
	}
		
 }
