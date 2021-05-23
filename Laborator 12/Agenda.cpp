#include "Agenda.h"
#include <iostream>
using namespace std;
void Agenda::addContact(Contact* pointer) {
	pointer->getName();
	L[currentIndex++] = pointer;
}
void Agenda::printList()
{
	for (int i = 0; i < this->currentIndex; i++)
	{
		cout << L[i]->getName() << " ";
	}
}