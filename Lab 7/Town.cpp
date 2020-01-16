# include <iostream>
# include "Town.h"
# include <fstream>
# include <sstream>
# include <stdlib.h>
using namespace std;
Town::Town()
{
	houses = new House[10];
}
Town::~Town()
{
	delete[] houses;
}
string Town::getTowninfo()
{
	stringstream aa;
	string Towninfo;
	for (int i = 0; i < 10; i++)
	{
		aa << "\tHouse#" << (i + 1) << ":\n";
		aa << houses[i].getHouseinfo() << endl;
	}
	return aa.str();
}
