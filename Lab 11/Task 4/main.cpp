# include <iostream>
# include <fstream>
# include <stdexcept>
# include <string>
# include "Header.h"
using namespace std;

int main()
{
	file f1;
	f1.getfilename();
	try
	{
		f1.filehandling();
	}
	catch (exception &q)
	{
		cout << q.what();
	}
	return 0;
}