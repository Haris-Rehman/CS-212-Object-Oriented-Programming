# include <iostream>
# include <string>
using namespace std;
class GradeBook
{
private:
	string CourseName;
public:
	GradeBook();
	GradeBook(string);
	int setCourseName(string name);
	string getCourseName();
	void DisplayMessage();
};
