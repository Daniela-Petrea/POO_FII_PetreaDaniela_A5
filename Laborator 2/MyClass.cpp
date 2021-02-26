#include "MyClass.h"

//cum realizez implementare: <tipul de return> <numele_clasei>::<nume_functie> (<parametri>) { <implementare> }

void MyClass::setAge(int my_age) {
	//ca sa accesam in interiorul unei metode atributele sau alte metode ale unei clase, folosim this->
	this->age = my_age;
}

int MyClass::getAge() {
	//avem implementat getterul unui atribut (age)
	return this->age;
}


//implementare constructor <nume_clasa>::<nume_clasa>(<parametri>)
MyClass::MyClass() {
	printf("Am apelat constructorul pentru clasa MyClass\n");
	this->age = 0;
}

//implementare destructor <nume_clasa>::~<nume_clasa>(<parametri>)
MyClass::~MyClass() {
	printf("Am apelat destructorul pentru clasa MyClass\n");
}