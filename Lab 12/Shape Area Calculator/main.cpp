#include<iostream>
#include"Header.h"
using namespace std;

int main()
{
	int cont;
	while (1)
	{
		int choice; shape *s;
		cout << "\n\nchoose the shape:" << endl;
		cout << "\t1 = square" << endl;
		cout << "\t2 = circle" << endl;
		cout << "\t3 = triangle" << endl;
		cout << "your choice:  "; cin >> choice;
		if (choice == 1)
		{
			int length;
			cout << "\n\nEnter the length:  "; cin >> length;
			square s1(length);
			s = &s1;
			cout << "\nArea of square = " << s->areacalculator() << endl << endl;
		}
		else if (choice == 2)
		{
			int radius;
			cout << "\n\nEnter the radius:  "; cin >> radius;
			circle c1(radius);
			s = &c1;
			cout << "\nArea of circle = " << s->areacalculator() << endl << endl;
		}
		else if (choice == 3)
		{
			int length;
			cout << "\n\nEnter the length:  "; cin >> length;
			triangle t1(length);
			s = &t1;
			cout << "\nArea of circle = " << s->areacalculator() << endl << endl;
		}

		cout << "do you want to enter again? 1=yes 0=no" << endl;
		cout << "your choice: "; cin >> cont;
		if (cont == 0)
			return 0;
		system("CLS");
	}
}
