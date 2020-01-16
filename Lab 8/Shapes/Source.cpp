# include <iostream>
# include "Header.h"
using namespace std;
void triangle::draw()
{
	int i, j; int k = 0;
	int l = getlength();
	for (i = 1; i <= l; ++i)
	{
		for (int space = 1; space <= l - i; ++space)
		{
			cout << "  ";
		}
		while (k != 2 * i - 1)
		{
			cout << "* ";
			++k;
		}
		k = 0;
		cout << "\n";
	}
}
void square::draw()
{
	int i, j;
	int l = getlength();
	for (i = 1; i <= l; ++i)
	{
		for (j = 1; j <= l; ++j)
		{
			cout << " *";
		}
		cout << "\n";
	}
}
void rectangle::draw()
{
	int l = getlength();
	int w = getwidth();
	for (int i = 1; i <= w; ++i)
	{
		for (int j = 1; j <= l; ++j)
		{
			cout << " *";
		}
		cout << "\n";
	}
}
void line::draw()
{
	int i;
	int l = getlength();
	for (i = 1; i <= l; ++i)
	{
		cout << "*";
	}
	cout << endl;
}
void circle::draw()
{
	int circle_radius = getlength();
	for (int i = 0; i <= 2 * circle_radius; i++)
	{
		for (int j = 0; j <= 2 * circle_radius; j++)
		{
			float distance_to_centre = sqrt((i - circle_radius)*(i - circle_radius) + (j - circle_radius)*(j - circle_radius));
			if (distance_to_centre > circle_radius - 0.5 && distance_to_centre < circle_radius + 0.5)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}
shape::shape(int l, int w)
{
	setlength(l);
	setwidth(w);
}
shape::shape()
{
	length = 0; width = 0;
}
shape::shape(const shape &a)
{
	length = a.getlength();
	width = a.getwidth();
}
void shape::setlength(int l)
{
	length = l;
}
int shape::getlength()const
{
	return length;
}
void shape::setwidth(int w)
{
	width = w;
}
int shape::getwidth()const
{
	return width;
}
