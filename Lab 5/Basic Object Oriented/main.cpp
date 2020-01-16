# include <iostream>
# include <string>
# include "GradeBook.h"
using namespace std;
void main()
{
	GradeBook MYGRADEBOOK;
	string name;
	int check;
	cout << "\t(Welcome to the GradeBook)\n" << endl;
	cout << "Enter the Name of Course:\n\t";
	getline(cin, name);
	check = MYGRADEBOOK.setCourseName(name);
	if (check == -1)
	{
		cout << "\n\tCourseName setting was not succcessful" << "\n\tTherefore, Considering first 25 characters.";
	}
	cout << endl;
	MYGRADEBOOK.DisplayMessage();
}
