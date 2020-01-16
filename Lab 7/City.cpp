# include <iostream>
# include "City.h"
# include <fstream>
# include <sstream>
# include <stdlib.h>
using namespace std;
City::City()
{
	Towns = new Town[3];
}
City::~City()
{
	delete[] Towns;
}
string City::getCityinfo()
{
	stringstream aa;
	string Cityinfo;
	for (int i = 0; i < 3; i++)
	{
		aa << "Town#" << (i + 1) << ":\n";
		aa << Towns[i].getTowninfo() << endl;
	}
	return aa.str();
}
