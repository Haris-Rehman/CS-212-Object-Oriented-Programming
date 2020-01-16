#include<iostream>
using namespace std;
class Temperature
{
private:
	float temperature;
public:
	Temperature();
	Temperature(float);
	void setTemperature(float t);
	float getTemperature();
	void convertTemperature_ctof();//convert temperature from celcius to farhaniet
	void convertTemperature_ftoc();//convert temperature from farhaniet to celcius
	void DisplayMessage();
};
