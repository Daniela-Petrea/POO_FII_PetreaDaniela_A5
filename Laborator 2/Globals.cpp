#pragma once
#include "Globals.h"

//daca am pointer (*) (MyClass *obiect) -> accesez metode / atribute utilizand -> (obiect->getAge())
//daca am obiect (MyClass obiect) -> accesez metode / atribute utilizand . (obiect.getAge())

int MyComparator(MyClass* obiect1, MyClass* obiect2) {
	int age1 = obiect1->getAge();
	int age2 = obiect2->getAge();
	if (age1 == age2)
		return 0;
	if (age1 > age2)
		return 1;
	if (age1 < age2)
		return -1; //puteam returna direct -1
}