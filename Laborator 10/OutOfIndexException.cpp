#include <iostream>

#include <exception>

using namespace std;
class exceptie2 : public exception

{

	virtual const char* what() const throw()

	{

		return "Indexul este inafara domeniului!";

	}

};