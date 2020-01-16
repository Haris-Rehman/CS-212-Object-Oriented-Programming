# include <iostream>
# include "Length.h"
# include "WEIGHT.h"
# include "TEMPERATURE.h"
using namespace std;
void main()
{
	Length length;
	Weight weight;
	Temperature temperature;
	int option;
	int lengthoption, weightoption, temperatureoption;
	float l, w, t;//length, width, temperature
	cout << "\t(Welcome to conversions)";
	cout << "\n\nWhat conversion do you want to carry out?" << endl;
	cout << "1=Length 2=Weight 3=Temperature\t:  ";
	cin >> option;
	switch (option)
	{
	case 1:
		cout << "How do you want conversions?" << endl;
		cout << "1=feet to meter 2=feet to centimeter\t:  ";
		cin >> lengthoption;
		cout << "Enter the Length:  ";
		cin >> l;
		length.setLength(l);
		if (lengthoption == 1)
		{
			length.convertLength_ftom();
		}
		if (lengthoption == 2)
		{
			length.convertLength_ftocm();
		}
		length.DisplayMessage();
		break;
	case 2:
		cout << "How do you want conversions?" << endl;
		cout << "1=pound to kg 2=kg to pound\t:  ";
		cin >> weightoption;
		cout << "Enter the Weight:  ";
		cin >> w;
		weight.setWeight(w);
		if (weightoption == 1)
		{
			weight.convertWeight_ptokg();
		}
		if (weightoption == 2)
		{
			weight.convertWeight_kgtop();
		}
		weight.DisplayMessage();
		break;
	case 3:
		cout << "How do you want conversions?" << endl;
		cout << "1=C to F 2=F to C\t:  ";
		cin >> temperatureoption;
		cout << "Enter the Temperature:  ";
		cin >> t;
		temperature.setTemperature(t);
		if (temperatureoption == 1)
		{
			temperature.convertTemperature_ctof();
		}
		if (temperatureoption == 2)
		{
			temperature.convertTemperature_ftoc();
		}
		temperature.DisplayMessage();
		break;
	}
}
