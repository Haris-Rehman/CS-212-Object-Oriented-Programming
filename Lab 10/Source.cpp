#include<iostream>
#include"Header.h"
using namespace std;
void position::setxloc(int c)
{
	if (c >= 0)
		xloc = c;
	else
		xloc = 0;
}
void position::setyloc(int c)
{
	if (c >= 0)
		yloc = c;
	else
		yloc = 0;
}

int position::getxloc() { return xloc; }
int position::getyloc() { return yloc; }

void shape::setfillcol(char c) { fillcol = c; }
void shape::setlinecol(char j) { linecol = j; }

char shape::getfillcol() { return fillcol; }
char shape::getlinecol() { return linecol; }

void shape::getpositions(int l, int t)
{
	p.setxloc(l);
	p.setyloc(t);
	cout << "\tx position is " << p.getxloc() << endl;
	cout << "\ty position is " << p.getyloc() << endl;
}

void rectangle::setlength(int g) { length = g; }
int rectangle::getlength() { return length; }

void rectangle::setwidth(int p) { width = p; }
int rectangle::getwidth() { return length; }

rectangle::rectangle() { rect++; }
circle::circle() { cir++; }

// static variables initiallized
int rectangle::rect = 0;
int circle::cir = 0;

int  rectangle::calcarea()
{
	int area = length*width;
	return area;
}
void rectangle::setrectangleposition(int k, int l)
{
	pr.xloc = k;
	pr.yloc = l;
}
void rectangle::displayrectangleposition()
{
	cout << "\tx coordinate is " << pr.xloc << endl;
	cout << "\ty coordinate is " << pr.yloc << endl;
}

void circle::setradius(int r) { radius = r; }
int circle::getradius() { return radius; }

int circle::calcarea()
{
	int area = radius * radius * 22 / 7; // area of circle = (pi)*r^2
	return area;
}
void circle::setcircleposition(int k, int p)
{
	pc.xloc = k;
	pc.yloc = p;
}
void circle::displaycircleposition()
{
	cout << "\tx coordinate is " << pc.xloc << endl;
	cout << "\ty coordinate is " << pc.yloc << endl;
}

// number of rectangles = nor
void canvas::setnor(int c) { nor = c; }
int canvas::getnor() { return nor; }

// number of circles = noc
void canvas::setnoc(int c) { noc = c; }
int canvas::getnoc() { return noc; }

canvas::canvas()
{
	nor = 0;
	noc = 0;
}
canvas::~canvas()
{
	delete[] rectangles;
	delete[] circles;
	circle::cir = 0;
	rectangle::rect = 0;
}
void canvas::make()
{
	rectangles = new rectangle[nor];
	circles = new circle[noc];
}
void canvas::removecircle(int n)
{
	// when one circle is removed from the array, shifting of other shapes to fill the blank space
	for (int i = n-1; i < nor; i++)
		circles[i] = circles[i + 1];
	noc--;
	circle::cir--;
}
void canvas::removerectangle(int n)
{
	// when one rectangle is removed from the array, shifting of other shapes to fill the blank space
	for (int i = n-1; i < nor; i++)
		rectangles[i] = rectangles[i + 1];
	nor--;
	rectangle::rect--;
}
void canvas::operation()
{
	int choice;
	cout << endl << endl;
	cout << "enter operation:" << endl;
	cout << "\t1 = set positions" << endl;
	cout << "\t2 = set color" << endl;
	cout << "\t3 = set diamentions" << endl;
	cout << "\t4 = view number of shapes" << endl;
	cout << "\t5 = view position" << endl;
	cout << "\t6 = view color" << endl;
	cout << "\t7 = view area" << endl;
	cin >> choice;
	if (choice == 1) // set positions
	{
		for (int i = 0; i < nor; i++)
		{
			int k, c;
			cout << endl;
			cout << "rectangle#" << i + 1 << endl;
			cout << "\tx position:\t";
			cin >> k;
			cout << "\ty position:\t";
			cin >> c;
			rectangles[i].setrectangleposition(k, c);
		}
		for (int i = 0; i < noc; i++)
		{
			int k, c;
			cout << endl;
			cout << "circle#" << i + 1 << endl;
			cout << "\tx position:\t";
			cin >> k;
			cout << "\ty position:\t";
			cin >> c;
			circles[i].setcircleposition(k, c);
		}
	}
	if (choice == 2) // set colour
	{
		char w; char x;
		for (int i = 0; i < nor; i++)
		{
			cout << "rectangle#" << i + 1 << endl;
			cout << "\tenter fill colour:\t";
			cin >> w;
			rectangles[i].setfillcol(w);
			cout << "\tenter line colour:\t";
			cin >> x;
			rectangles[i].setlinecol(x);
		}
		char y; char z;
		for (int i = 0; i < noc; i++)
		{
			cout << "circle#" << i + 1 << endl;
			cout << "\tenter fill colour:\t";
			cin >> y;
			circles[i].setfillcol(y);
			cout << "\tenter line colour:\t";
			cin >> z;
			circles[i].setlinecol(z);
		}
	}
	if (choice == 3) // set diamentions
	{
		int as;
		cout << endl;
		cout << "\t1 = rectangle" << endl;
		cout << "\t2 = circle" << endl;
		cout << "shape =\t";
		cin >> as;
		if (as == 1)
		{
			int l, w;
			for (int i = 0; i < nor; i++)
			{
				cout << "rectangle#" << i + 1 << endl;
				cout << "\tenter length:\t" << endl;
				cin >> l;
				rectangles[i].length = l;
				cout << "\tenter width:\t" << endl;
				cin >> w;
				rectangles[i].width = w;
			}
		}
		if (as == 2)
		{
			int r;
			for (int i = 0; i < noc; i++)
			{
				cout << "circle#" << i + 1 << endl;
				cout << "\tradius:\t" << endl;
				cin >> r;
				circles[i].radius = r;
			}
		}
	}
	if (choice == 4) // view number of shapes
	{
		cout << "rectangles are " << rectangle::rect << endl;
		cout << "circles are " << circle::cir << endl;
		cout << "total objects are " << rectangle::rect + circle::cir << endl;
	}
	if (choice == 5) // display positions
	{
		for (int i = 0; i < nor; i++)
		{
			cout << "rectangle#" << i + 1 << endl;
			rectangles[i].displayrectangleposition();
		}
		for (int i = 0; i < noc; i++)
		{
			cout << "circle#" << i + 1 << endl;
			circles[i].displaycircleposition();
		}
	}
	if (choice == 6) // view colours
	{
		for (int i = 0; i < nor; i++)
		{
			cout << "for rectangle " << i + 1 << endl;
			cout << "\tfill color: " << rectangles[i].getfillcol() << endl;
			cout << "\tline color: " << rectangles[i].getlinecol() << endl;
		}
		for (int i = 0; i < noc; i++)
		{
			cout << "for circle " << i + 1 << endl;
			cout << "\tfill color: " << circles[i].getfillcol() << endl;
			cout << "\tline color: " << circles[i].getlinecol() << endl;
		}
	}
	if (choice == 7) // view area of shapes
	{
		for (int i = 0; i < nor; i++)
			cout << "area of rectangle " << i + 1 << " = " << rectangles[i].calcarea() << endl;
		for (int i = 0; i < noc; i++)
			cout << "area of circle " << i + 1 << " = " << circles[i].calcarea() << endl;
	}
}
