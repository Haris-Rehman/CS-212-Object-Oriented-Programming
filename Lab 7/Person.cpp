# include <iostream>
# include "Person.h"
# include <fstream>
# include <sstream>
# include <stdlib.h>
using namespace std;
Person::Person()
{
	age = (rand() % 4) + 18; // range between 18 and 22
	height = (rand() % 150) + 100; // range between 100 and 250
	weight = (rand() % 50) + 50; // range between 50 and 100
}
int Person::getAge()
{
	return age;
}
int Person::getWeight()
{
	return weight;
}
float Person::getHeight()
{
	return height;
}
