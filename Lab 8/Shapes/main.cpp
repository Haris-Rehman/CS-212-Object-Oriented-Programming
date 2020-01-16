# include <iostream>
# include "Header.h"
using namespace std;
int main()
{
	while (1)
	{
		system("CLS");
		int choice;
		int l, w;
		cout << "What do you want to draw? \n 1 = triangle\n 2 = square\n 3 = rectangle \n 4 = line\n 5 = circle\n";
		cin >> choice;
		cout << "enter length: ";
		cin >> l;
		if (choice == 3)
		{
			cout << "enter width: ";
			cin >> w;
		}
		else if (choice != 3)
			w = 1;
		shape a(l, w);
		shape b = a; // copy constructor call
		if (choice == 1)
		{
			triangle b;
			b.setlength(l);
			b.draw();
		}
		else if (choice == 2)
		{
			square b;
			b.setlength(l);
			b.draw();
		}
		else if (choice == 3)
		{
			rectangle b;
			b.setlength(l);
			b.setwidth(w);
			b.draw();
		}
		else if (choice == 4)
		{
			line b;
			b.setlength(l);
			b.draw();
		}
		else if (choice == 5)
		{
			circle b;
			b.setlength(l);
			b.draw();
		}
		int z;
		cout << endl << "do u want to end the program? 1 = continue   0 = exit\n";
		cin >> z;
		if (z == 0)
			return 0;
	}
}
