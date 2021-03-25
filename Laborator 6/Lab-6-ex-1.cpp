#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Car.h"
#include "Mazda.h"
#include "Ford.h"
#include "Dacia.h"
#include "Toyota.h"
#include "Mercedes.h"
#include "Weather.h"
#include "Circuit.h"

int main()

{

	Circuit c;

	c.SetLength(100);

	//c.SetWeather(Weather::Rain);

	c.AddCar(new Dacia());

	c.AddCar(new Toyota());

	c.AddCar(new Mercedes());

	c.AddCar(new Ford());

	c.AddCar(new Mazda());

	c.Race();

	c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.

	c.ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit

	return 0;

}