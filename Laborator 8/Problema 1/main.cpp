#include <fstream>
#include <string>
#include <map>
#include <queue>
using namespace std;

class Compare {
public:
	bool operator() (pair<string, int> p1, pair<string, int> p2)
	{
		if (p1.second < p2.second)
			return true;
		if (p1.second > p2.second)
			return false;
		if (p1.first < p2.first)
			return false;
		return true;
	}
};

int main()
{
	string myString;
	ifstream file("input.txt");
	if (!file)
	{
		printf("eroare la deschiderea fisierului: input.txt");
		return 0;
	}
	if (!getline(file, myString))
	{
		printf("error la citirea din fisier: input.txt");
		return 0;
	}

	map<string, int> myMap;
	printf("Sirul de caractere citit este: %s\n", myString.c_str());

	string cuvinte;
	int j = 0;
	for (int i = 0; i < myString.size(); i++)
	{
		if (cuvinte != "")
		{
			j++;
			myMap[cuvinte]++;

		}
		cuvinte = "";
		while (myString[i] != ' ' && myString[i] != ',' && myString[i] != '?' && myString[i] != '!' && myString[i] != '.' && i < myString.size())
		{
			if (myString[i] >= 'A' && myString[i] <= 'Z')
			{
				myString[i] += 32;
				cuvinte += myString[i];
			}
			else
			{
				cuvinte += myString[i];
			}

			i++;
		}

	}

	if (cuvinte != "")
		myMap[cuvinte]++;


	printf("Am separat cu succes cuvintele din textul dat\n");

	for (auto mapIterator = myMap.begin(); mapIterator != myMap.end(); mapIterator++)
		printf(" %s : %d \n", mapIterator->first.c_str(), mapIterator->second);

	priority_queue<pair<string, int>, vector<pair<string, int>>, Compare> myQueue;

	for (auto mapIterator = myMap.begin(); mapIterator != myMap.end(); mapIterator++)
	{
		myQueue.push(pair<string, int>(mapIterator->first, mapIterator->second));
	}

	printf("Cuvintele Sortate: \n");
	while (!myQueue.empty())
	{
		pair<string, int> popValue = myQueue.top();
		printf("%s => %d\n", popValue.first.c_str(), popValue.second);
		myQueue.pop();
	}

	system("pause");
	return 0;
}
