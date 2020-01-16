# include <iostream>
# include "House.h"
# include <fstream>
# include <sstream>
# include <stdlib.h>
using namespace std;
House::House()
{
	population = (rand() % 3) + 3;
	people = new Person[population];
}
House::~House()
{
	delete[] people;
}
string House::getHouseinfo()
{
	stringstream aa;
	string Houseinfo;
	for (int i = 0; i < population; i++)
	{
		aa << "\t\tPerson" << (i + 1) << ":" << "\n";
		aa << "\t\t\tage = ";
		aa << people[i].getAge() << " year\n";
		aa << "\t\t\tWeight = ";
		aa << people[i].getWeight() << " kg\n";
		aa << "\t\t\tHeight = ";
		aa << people[i].getHeight() << " cm\n";
	}
	return aa.str();
}
