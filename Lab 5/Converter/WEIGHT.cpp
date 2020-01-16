# include <iostream>
# include "WEIGHT.h"
using namespace std;
Weight::Weight()// default constructor
{
	int w = 0;
}
Weight::Weight(float w)// overloaded constructor
{
	w = weight;
}
void Weight::setWeight(float w)
{
	weight = w;
}
float Weight::getWeight()
{
	return weight;
}
void Weight::convertWeight_ptokg()//convert weight from pounds to kg
{
	float w = 0.454 * weight;
	setWeight(w);
}
void Weight::convertWeight_kgtop()//convert weight from kg tp pounds
{
	float w = 2.205 * weight;
	setWeight(w);
}
void Weight::DisplayMessage()
{
	cout << "Converted weight = " << getWeight() << endl;
}
