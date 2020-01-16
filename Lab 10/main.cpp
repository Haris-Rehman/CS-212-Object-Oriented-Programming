#include"Header.h"
#include<iostream>
using namespace std;
int main()
{
	shape *sr; // base class pointer to store rectangles
	shape *sc; // base class pointer to store circles
	rectangle r1;
	circle c1;
	int nor; // number of rectangles
	cout << "enter the number of rectangles:\t";
	cin >> nor;
	int noc; // number of circles
	cout << "enter the number of circles:\t";
	cin >> noc;
	canvas c;
	c.setnor(nor); // set number of rectangles
	c.setnoc(noc); // set number of circles
	c.make();
	cout << "\ntotal rectangles:\t";
	cout << c.getnor() << endl;
	cout << "total circles: \t\t";
	cout << c.getnoc() << endl;
	sr = &r1; // envoking polymorphism
	sc = &c1;
	int k;
	while (1)
	{
		cout << "\n\tpress 1 to delete" << endl;
		cout << "\tpress 2 to info " << endl;
		cout << "\tpress 0 to exit" << endl << endl;
		cout << "your choice:  ";
		cin >> k;
		if (k == 2)
			c.operation(); // setting and viewing information
		else if (k == 1)
		{
			int g;
			cout << endl;
			cout << "1 = all" << endl;
			cout << "2 = any one" << endl;
			cout << " = ";
			cin >> g;
			switch (g)
			{
			case 1:
				c.~canvas(); // all shapes deleted
				break;
			case 2:
				int h;
				cout << "\n\t1 = rectangle" << endl;
				cout << "\t2 = circle" << endl;
				cout << "choice =  ";
				cin >> h;
				switch (h)
				{
				case 1:
					int n;
					cout << "enter object to delete:\t";
					cin >> n;
					c.removerectangle(n-1);
					break;
				case 2:
					int o;
					cout << "enter object to delete:\t";
					cin >> o;
					c.removecircle(o-1);
					break;
				}
				break;
			}
		}
		else if (k == 0)
			return 0;
	}
}
