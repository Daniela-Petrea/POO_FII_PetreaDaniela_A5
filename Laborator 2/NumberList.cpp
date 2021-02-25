#include "NumberList.h"
#include <string.h>
#include <stdio.h>
//aici vom implementa metodele din clasa
//ca sa implementam o metoda din clasa 
//<tipuldereturn> <nume_clasa>::<nume_metoda> (<parametri deca sunt>) {<implementarea>}
//ca sa accesam atribute ale clasei folosim this->

//constructorul si destructorul nu au valori de return


NumberList::NumberList() {
	printf("S-a apelat constructorul pentru obiectul meu\n");
	this->count = 0;
}

NumberList::~NumberList() {
	printf("S-a apelat destructorul\n");
}
