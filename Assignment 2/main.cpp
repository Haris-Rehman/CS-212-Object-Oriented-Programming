# include <iostream>
# include "Header.h"
# include <string>
# include <stdexcept>
using namespace std;

int main()
{
	cout << endl << endl;
	cout << "\t\tCALCULATOR\n\n";
	cout << "Limitations:\n";
	cout << "\tnumber cannot be divide by zero.\n";
	cout << "\tthis program is applicable only on integers.\n";
	cout << "\tcharacters other than integers and (+,-,*,/) are not allowed.\n";
	cout << "\tyou cannot enter integer greater than 31622.\n";
	cout << "\tyou cannot substract greater number from the smaller number.\n\n";
	string mexp;
	try
	{
		cout << "\n\nEnter the expression below if you agree.\n";
		cout << "\n\nExpression:\t";
		getline(cin, mexp); cout << endl;
		calculator p1(mexp);
		p1.operations();
		cout << "result = " << p1.getexp() << endl << endl;
	}
	catch (runtime_error &r)
	{
		cout << r.what();
	}
	catch (exception &e)
	{
		cout << e.what();
	}
	return 0;
}
