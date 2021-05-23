#pragma once
#include "Contact.h"
class Cunoscut:public Contact
{
	string nume;
	string nr_telefon;
public:
	string getNume();
	void setNume(string nume);
	string getNr_telefon();
	void setNr_telefon(string nr_telefon);
};

