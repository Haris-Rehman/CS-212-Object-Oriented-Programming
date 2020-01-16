# include <iostream>
# include <string>
# include "Person.h"
using namespace std;
class House
{
private:
	Person*people;
	int population;
public:
	House();
	~House();
	string getHouseinfo();
};
