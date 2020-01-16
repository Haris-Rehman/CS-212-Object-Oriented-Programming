# include <iostream>
# include "Header.h"
# include <string>
using namespace std;

void decimal::convert(int a)
{
	num = a;
	cout << "\nnumber in base 10: " << num << endl;
}

void octa::convert(int a)
{
	int rem, i = 1; num = 0;
	while (a != 0)
	{
		rem = a % 8;
		a /= 8;
		num += rem * i;
		i *= 10;
	}
	cout << "\nnumber in base 8: " << num << endl;
}

void hexa::convert(int a)
{
	int remainder = 0;
	string str = "";
	while (a > 0)   // Do this whilst the quotient > 0.
	{
		remainder = a % 16; // Get the remainder.
		if (remainder > 9)
		{
			// Map the character given that the remainder > 9.
			switch (remainder)
			{
			case 10: str = "A" + str; break;
			case 11: str = "B" + str; break;
			case 12: str = "C" + str; break;
			case 13: str = "D" + str; break;
			case 14: str = "E" + str; break;
			case 15: str = "F" + str; break;
			}
		}
		else
		{
			str = char(remainder + 48) + str; // Converts integer (0-9) to ASCII code.
		}
		a = a / 16;
	}
	cout << "\nnumber in base 16: ";
	if (str == "") // if the number was 0, the string will remain empty
		cout << "0";
	else
		cout << str;
	cout << endl << endl;
}