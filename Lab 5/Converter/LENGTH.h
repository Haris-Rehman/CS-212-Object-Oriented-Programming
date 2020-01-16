#include<iostream>
using namespace std;
class Length
{
private:
	float length;
public:
	Length();
	Length(float);
	void setLength(float l);
	float getLength();
	void convertLength_ftom(); // convert length from feet to meter
	void convertLength_ftocm();// convert length from feet to centimeter
	void DisplayMessage();
};
