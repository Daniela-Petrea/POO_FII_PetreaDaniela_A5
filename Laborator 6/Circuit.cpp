#include "Circuit.h"
#define _CRT_SECURE_NO_WARNINGS
#include "Weather.h"

Circuit::Circuit() {
	this->maxIndex = 5;
	this->currentIndex = 0;
	this->car = (Car**)(malloc(this->maxIndex * sizeof(Car*)));
}

bool Circuit::AddCar(Car* myClass) {
	if (this->currentIndex < this->maxIndex) {
		this->car[this->currentIndex++] = myClass;
		return true;
	}
	return false;
}

int Circuit::SetLength(int length)
{
	this->lungime = length;
}
//int Circuit::SetWeather()
//{

//}
//void Circuit::printClassesData() {
	//for (int i = 0; i < this->currentIndex; i++)
	//	this->vectorDate[i]->printData();
//}