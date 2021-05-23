#pragma once
#include "Contact.h"
#include <iostream>
#include <string>
using namespace std;
class Prieten:public Contact
{
	string nume;
	string data;
	string nr_telefon;
	string adresa;
	public:
		string getNume();
		void setNume(string nume);
		string getData();
		void setData(string data);
		string getNr_telefon();
		void setNr_telefon(string nr_telefon);
		string getAdresa();
		void setAdresa(string adresa);
};

