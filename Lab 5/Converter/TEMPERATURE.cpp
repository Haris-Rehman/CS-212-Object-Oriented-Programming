# include <iostream>
# include "TEMPERATURE.h"
using namespace std;
Temperature::Temperature()// default constructor
{
	int t = 0;
}
Temperature::Temperature(float t)//overloaded constructor
{
	t = temperature;
}
void Temperature::setTemperature(float t)
{
	temperature = t;
}
float Temperature::getTemperature()
{
	return temperature;
}
void Temperature::convertTemperature_ctof()//convert temperature from celcius to farhaniet
{
	float t = temperature * 9 / 5 + 32;
	setTemperature(t);
}
void Temperature::convertTemperature_ftoc()//convert temperature from farhaniet to celcius
{
	float t = (temperature - 32) * 5 / 9;
	setTemperature(t);
}
void Temperature::DisplayMessage()
{
	cout << "Converted temperature = " << getTemperature() << endl;
}
