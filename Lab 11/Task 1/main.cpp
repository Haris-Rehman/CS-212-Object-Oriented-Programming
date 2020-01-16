# include <iostream>
# include <stdexcept>
# include "Header.h"
using namespace std;

int main()
{
	float first, second; char operation;

	try
	{
		cout << "enter the first number:\t   "; cin >> first;
		cout << "enter the operation:\t   "; cin >> operation;
		if (operation != '+' && operation != '-' && operation != '*' && operation != '/')
			throw runtime_error("syntax error.");
		cout << "enter the second number:   "; cin >> second;
	}
	catch (runtime_error &a)
	{
		cout << endl << a.what() << endl << endl;
		return 0;
	}

	calculator c1(first, second, operation);

	try
	{
		c1.Operation();
		cout << endl << "result = " << c1.getresult() << endl << endl;
	}
	catch (runtime_error &e)
	{
		cout << endl << e.what() << endl << endl;
	}
	return 0;
}