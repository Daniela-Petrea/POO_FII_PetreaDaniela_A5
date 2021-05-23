#pragma once
#include "Contact.h"
#include <iostream>;
using namespace std;
//#include <vector>
class Agenda
{
	int currentIndex = 0;
	Contact* L[100];
public:
	void addContact(Contact*);	
	string getName();
	//string getNume();
	//void setData(string data);
	//string getData();
	//void setNr_telefon(string nr_telefon);
	//string getNr_telefon();
   // void setAdresa(string adresa);
	//string getAdresa();
	
	void printList();
};
