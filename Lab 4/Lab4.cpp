#include<iostream>
#include<string>
using namespace std;
class student
{
private:
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
	student() // default constructor
	{
		setName("NULL");
		setRollNo(0);
		setAge(0);
		setGPA(0);
		setAddress("NULL");
		setMarkSubject1(0);
		setMarkSubject2(0);
		setMarkSubject3(0);
		setTotalMarks(100);
	}
	student(string name, int rollno, int age, float gpa, string grade, string address, int marksubject1, int marksubject2, int marksubject3, int totaltarks)
	{ // overloaded constructor
		setName(name);
		setRollNo(rollno);
		setAge(age);
		setGPA(gpa);
		setAddress(address);
		setMarkSubject1(marksubject1);
		setMarkSubject2(marksubject2);
		setMarkSubject3(marksubject3);
		setTotalMarks(totaltarks);
	}
	// setters and getters to initiallize data members
	void setName(string name)
	{
		Name = name;
	}
	string getName()
	{
		return Name;
	}
	void setRollNo(int rollno)
	{
		RollNo = rollno;
	}
	int getRollNo()
	{
		return RollNo;
	}
	void setAge(int age)
	{
		Age = age;
	}
	int getAge()
	{
		return Age;
	}
	void setGPA(int gpa)
	{
		GPA = gpa;
	}
	float getGPA()
	{
		return GPA;
	}
	void setAddress(string address)
	{
		Address = address;
	}
	string getAddress()
	{
		return Address;
	}
	void setMarkSubject1(int marksubject1)
	{
		MarkSubject1 = marksubject1;
	}
	int getMarkSubject1()
	{
		return MarkSubject1;
	}
	void setMarkSubject2(int marksubject2)
	{
		MarkSubject2 = marksubject2;
	}
	int getMarkSubject2()
	{
		return MarkSubject2;
	}
	void setMarkSubject3(int marksubject3)
	{
		MarkSubject3 = marksubject3;
	}
	int getMarkSubject3()
	{
		return MarkSubject3;
	}
	void setTotalMarks(int totalmarks)
	{
		TotalMarks = totalmarks;
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
	string name;
	int rollno;
	int age;
	float gpa;
	float percentage;
	string grade;
	string address;
	int marksubject1;
	int marksubject2;
	int marksubject3;
	int totalmarks;
	// for student1, following is the data to be input by user
	cout << "\t(Student1)\n\n";
	cout << "Enter the Name:\t\t";
	getline(cin, name);
	cout << "Enter the Roll.No.:\t";
	cin >> rollno;
	cout << "Enter the Age:\t\t";
	cin >> age;
	cout << "Enter the GPA:\t\t";
	cin >> gpa;
	cout << "Enter the Address:\t";
	cin.ignore();
	getline(cin, address);
	cout << "Enter subject1 marks:\t";
	cin >> marksubject1;
	cout << "Enter subject2 marks:\t";
	cin >> marksubject2;
	cout << "Enter subject3 marks:\t";
	cin >> marksubject3;
	cout << "Enter total marks:\t";
	cin >> totalmarks;
	// student2 using overloaded constructor
	student student1(name, rollno, age, gpa, grade, address, marksubject1, marksubject2, marksubject3, totalmarks);
	student1.DisplayMessage();
	// student1 using default constructor
	cout << "\n\n\t(Student2)";
	student student2;
	student2.DisplayMessage();
}
