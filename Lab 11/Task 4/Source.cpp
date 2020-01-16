# include <stdexcept>
# include <string>
# include <fstream>
# include "Header.h"
# include <iostream>
using namespace std;

void file::getfilename()
{
	cout << "\nfile type is = .txt" << endl << endl;
	 // promting the user to enter the file name
	cout << "file name with .txt extension:  "; getline(cin, s);
	cout << "\nyour file name =  " << s << endl;
}

void file::filehandling()
{
	fstream yourfile(s);
	if (yourfile.is_open())
	{
		try
		{
			cout << "\nenter the number:  ";
			cin >> number; cout << endl;
			if (number < 0 || number > 100) // range of number
				throw runtime_error("number out of bound.\n\n");

			yourfile << number << endl;
			yourfile.close();
		}
		catch (runtime_error &r)
		{
			cout << r.what();
		}
	}
	else
	{
		throw exception("\nno such file exists\n\n");
	}
}