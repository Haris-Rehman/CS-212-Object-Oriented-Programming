#include <iostream>
#include"Header.h"
#include<exception>
using  namespace std;
int main()
{
	num n;
	float a, b, c, d;
	float av;

	cout << "enter 1st number:  "; cin >> a;
	cout << "enter 2nd number:  "; cin >> b;
	cout << "enter 3rd number:  "; cin >> c;
	cout << "enter 4th number:  "; cin >> d;

	try
	{
		av = n.averagecalculator(a, b, c, d);
		cout << "\naverage:\t   ";
		cout << av << endl << endl;
	}
	catch (const char* name)
	{
		cout << "\nERROR" << endl;
		cerr << name << endl;
	}

}