#pragma once
#include <string>
#include "Contact.h"
#include <iostream>
using namespace std;
class Coleg:public Contact
{
	string nume;
	string nr_telefon;
	string firma;
	string adresa;
public:
	string getNume();
	void setNume(string nume);
	string getFirma();
	void setFirma(string data);
	string getNr_telefon();
	void setNr_telefon(string nr_telefon);
	string getAdresa();
	void setAdresa(string adresa);
};

