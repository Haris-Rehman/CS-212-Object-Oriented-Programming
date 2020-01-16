#include<iostream>
using namespace std;
void main()
{
	float feets, inches;
float cm; // centimeters
	cout << "Enter the value in feets and inches" << endl;
	cout << "feets = ";
	cin >> feets; // scan feets
	cout << "inches = ";
	cin >> inches; // scan inches
	cm = (feets * 12 * 2.54) + (inches * 2.54);//inches and feets are converted into centimeters and added (for total length).
	cout << "values in cm is " << cm << endl;
} 
