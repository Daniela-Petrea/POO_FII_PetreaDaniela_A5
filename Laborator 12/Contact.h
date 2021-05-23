#pragma once
#include <string>
using namespace std;
class Contact
 {
	string nume;
public:
	virtual string getName() = 0;
	//virtual string getInfo() = 0;
	virtual void setName(string name) = 0;
};