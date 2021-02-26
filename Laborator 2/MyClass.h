#pragma once
#include <stdio.h>
class MyClass
{
	//private: (care este by default daca nu pun modificator de access) (nu pot accessa atributele si metodele din exterior)
	//public: (am access de oriunde pe membrii / methodele care sunt in zona public)
	//protected: (am access in zona protected doar din clasele derivate)
	//ca si observatie, in clasa curenta (in implementare) am access la orice tine de clasa curenta indiferent de access

	//membri / atribut
	int age;

	//good practice; accesul la membri / atribute_restrictionat (private / protected)
	//accesul la methode (protected / public), eventual functiile care sa ne ajute intern (private / protected)

public:
	//fiecare clasa poate sa aiba 0 sau mai multi constructori declarati
	//<nume_clasa>(<parametri>); (daca nu am parametri, e constructorul implicit / default)

	MyClass();

	//fiecare clasa poate sa aiba 0 sau maxim 1 destructoru declarat
	// ~<nume_clasa>(); -> destructorul nu primeste parametri

	~MyClass();


	//methode: <valoare de return> <numele_metodei> (<parametri>); (nu utiati de ;) !!!!
	void setAge(int my_age);
	int getAge();
};