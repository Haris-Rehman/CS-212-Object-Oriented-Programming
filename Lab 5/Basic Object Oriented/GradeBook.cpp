# include <iostream>
# include <string>
# include "GradeBook.h"
using namespace std;
GradeBook::GradeBook()
{
	CourseName = "NULL";
}
GradeBook::GradeBook(string name)
{
	CourseName = name;
}
int GradeBook::setCourseName(string name)
{
	if (name.size() <= 25)//if characters are less than 25
	{
		CourseName = name;
		return 0;
	}
	else
	{
		CourseName = name.substr(0, 25);//consider first 25 characters
		return -1;
	}
}
string GradeBook::getCourseName()
{
	return CourseName;
}
void GradeBook::DisplayMessage()
{
	cout << "\nYour Course Name:\n\t" << getCourseName() << endl << endl;
}
