#include<iostream>
using namespace std;
class Weight
{
private:
	float weight;
public:
	Weight();
	Weight(float);
	void setWeight(float w);
	float getWeight();
	void convertWeight_ptokg(); //convert weight from pounds to kg
	void convertWeight_kgtop(); //convert weight from kg tp pounds
	void DisplayMessage();
};
