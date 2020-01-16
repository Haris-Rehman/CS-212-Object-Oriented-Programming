#include<iostream>
#include<string>
using namespace std;
class student
{
private:
	// attributes
	string Name;
	int RollNo;
	int Age;
	float GPA;
	float Percentage;
	string Grade;
	string Address;
	int MarkSubject1;
	int MarkSubject2;
	int MarkSubject3;
	int TotalMarks;
public:
	// behaviours
	// setters, getters and other founctions
	void setName()
	{
		cout << "Enter the Name:\t\t";
		getline(cin, Name);
	}
	string getName()
	{
		return Name;
	}
	void setRollNo()
	{
		cout << "Enter the Roll.No.:\t";
		cin >> RollNo;
	}
	int getRollNo()
	{
		return RollNo;
	}
	void setAge()
	{
		cout << "Enter the Age:\t\t";
		cin >> Age;
	}
	int getAge()
	{
		return Age;
	}
	void setGPA()
	{
		cout << "Enter the GPA:\t\t";
		cin >> GPA;
	}
	float getGPA()
	{
		return GPA;
	}
	void setAddress()
	{
		cout << "Enter the Address:\t";
		cin.ignore();
		getline(cin, Address);
	}
	string getAddress()
	{
		return Address;
	}
	void setMarkSubject1()
	{
		cout << "Enter subject1 marks:\t";
		cin >> MarkSubject1;
	}
	int getMarkSubject1()
	{
		return MarkSubject1;
	}
	void setMarkSubject2()
	{
		cout << "Enter subject2 marks:\t";
		cin >> MarkSubject2;
	}
	int getMarkSubject2()
	{
		return MarkSubject2;
	}
	void setMarkSubject3()
	{
		cout << "Enter subject3 marks:\t";
		cin >> MarkSubject3;
	}
	int getMarkSubject3()
	{
		return MarkSubject3;
	}
	void setTotalMarks()
	{
		cout << "Enter total marks:\t";
		cin >> TotalMarks; // total marks of each subject
	}
	float PercentageCalculator(int Marks)
	{
		Percentage = ((float)Marks / (float)TotalMarks) * 100;
		return Percentage;
	}
	string GradeFinder(float Percentage)
	{
		if (Percentage >= 80 && Percentage <= 100)
			Grade = "A";
		if (Percentage >= 70 && Percentage <= 80)
			Grade = "B+";
		if (Percentage >= 60 && Percentage <= 70)
			Grade = "B";
		if (Percentage >= 50 && Percentage <= 60)
			Grade = "C+";
		if (Percentage >= 40 && Percentage <= 50)
			Grade = "C";
		if (Percentage >= 0 && Percentage <= 40)
			Grade = "F";
		return Grade;
	}
	void DisplayMessage()
	{
		cout << endl << endl;
		cout << "Name:\t\t\t" << getName() << endl
			<< "Roll. No>:\t\t" << getRollNo() << endl
			<< "Age:\t\t\t" << getAge() << endl
			<< "GPA:\t\t\t" << getGPA() << endl
			<< "Address:\t\t" << Address << endl;
		// calculating results for subject 1
		cout << "Subject1 Marks:\t\t" << getMarkSubject1();
		float p1 = PercentageCalculator(MarkSubject1);
		cout << "\t\tPercentage1:\t" << p1;
		cout << "\t\tGrade1:\t" << GradeFinder(Percentage) << endl;
		// calculating results for subject 2
		cout << "Subject2 Marks:\t\t" << getMarkSubject2();
		float p2 = PercentageCalculator(MarkSubject2);
		cout << "\t\tPercentage2:\t" << p2;
		cout << "\t\tGrade2:\t" << GradeFinder(Percentage) << endl;
		// calculating results for subject 3
		cout << "Subject3 Marks:\t\t" << getMarkSubject3();
		float p3 = PercentageCalculator(MarkSubject3);
		cout << "\t\tPercentage3:\t" << p3;
		cout << "\t\tGrade3:\t" << GradeFinder(Percentage) << endl;
	}
};
void main()
{
	student Haris;
	Haris.setName();
	Haris.setRollNo();
	Haris.setAge();
	Haris.setGPA();
	Haris.setAddress();
	Haris.setMarkSubject1();
	Haris.setMarkSubject2();
	Haris.setMarkSubject3();
	Haris.setTotalMarks();
	Haris.DisplayMessage();
}
