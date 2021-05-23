#include "Cunoscut.h"
#include <iostream>
#include <string>
using namespace std;
void Cunoscut::setNume(string nume)
{
	this->nume = nume;
};
string Cunoscut::getNume()
{
	return this->nume;
};
void Cunoscut::setNr_telefon(string nr_telefon)
{
	this->nr_telefon = nr_telefon;
};
string Cunoscut::getNr_telefon()
{
	return this->nr_telefon;
};
