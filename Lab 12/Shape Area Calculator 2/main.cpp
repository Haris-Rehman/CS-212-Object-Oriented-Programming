# include <iostream>
# include "Header.h"
using namespace std;

int main()
{
	int cont;
	while (1)
	{
		int choice;
		shape *s1;
		cout << "\n\nchose the shape:" << endl;
		cout << "\t1 = sphere" << endl;
		cout << "\t2 = cube" << endl;
		cout << "\t3 = cone" << endl;
		cout << "your choice:  "; cin >> choice;
		if (choice == 1)
		{
			float radius;
			cout << "\n\nEnter the radius:  "; cin >> radius;
			sphere s(radius);
			s1 = &s; // polymorphism
			s1->calculatearea();
			s1->calculatevolume();
			cout << "\nsurface area:\t" << s1->getarea() << endl;
			cout << "\nvolume:\t" << s1->getvolume() << endl << endl;
		}
		else if (choice == 2)
		{
			float l;
			cout << "\n\nEnter the length:  "; cin >> l;
			cube c(l);
			s1 = &c;// polymorphism
			s1->calculatearea();
			s1->calculatevolume();
			cout << "\nsurface area:\t" << s1->getarea() << endl;
			cout << "\nvolume:\t" << s1->getvolume() << endl << endl;
		}
		else if (choice == 3)
		{
			float radius, height;
			cout << "\n\nEnter the radius:  "; cin >> radius;
			cout << "Enter the height:  "; cin >> height;
			cone co(radius, height);
			s1 = &co;// polymorphism
			s1->calculatearea();
			s1->calculatevolume();
			cout << "\nsurface area:\t" << s1->getarea() << endl;
			cout << "\nvolume:\t" << s1->getvolume() << endl << endl;
		}
		cout << "do you want to enter again? 1=yes 0=no" << endl;
		cout << "your choice: "; cin >> cont;
		if (cont == 0)
			return 0;
		system("CLS");
	}
}