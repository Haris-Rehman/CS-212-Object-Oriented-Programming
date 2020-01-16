# include <iostream>
# include "Header.h"
using namespace std;

int main()
{
	fibonacci f1;
	try
	{
		f1.sequence();
	}
	catch (exception &a)
	{
		cout << endl << a.what() << endl;
	}
	f1.print();
	return 0;
}