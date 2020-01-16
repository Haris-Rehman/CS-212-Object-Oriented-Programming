# include <iostream>
# include "LENGTH.h"
using namespace std;
Length::Length()// default constructor
{
	int l = 0;
}
Length::Length(float l)//overloaded constructor
{
	l = length;
}
void Length::setLength(float l)
{
	length = l;
}
float Length::getLength()
{
	return length;
}
void Length::convertLength_ftom()// convert length from feet to meter
{
	float l = 0.305 * length;
	setLength(l);
}
void Length::convertLength_ftocm()// convert length from feet to centimeter
{
	float l = 30.48 * length;
	setLength(l);
}
void Length::DisplayMessage()
{
	cout << "Converted length = " << getLength() << endl;
}
