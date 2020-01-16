#include<iostream>
#include"Header.h"
using namespace std;

complex::complex()
{
	real = 0;
	imaginary = 0;
}

void complex::setreal(int g) { real = g; }

int complex::getreal() { return real; }

void complex::setimaginary(int y) { imaginary = y; }

int complex::getimaginary() { return imaginary; }

void complexoper::addcomplex(complex c1, complex c2)
{
	c3.real = c1.real + c2.real;
	c3.imaginary = c1.imaginary + c2.imaginary;
}

void complexoper::subcomplex(complex c1, complex c2)
{
	c4.real = c1.real - c2.real;
	c4.imaginary = c1.imaginary - c2.imaginary;
}

void complexoper::mulcomplex(complex c1, complex c2)
{
	c5.real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
	c5.imaginary = (c1.real*c2.imaginary) + (c1.imaginary*c2.real);
}

void complexoper::divcomplex(complex c1, complex c2)
{
	c6.real = ((c1.real*c2.real) + (c1.imaginary*c2.imaginary)) / ((c2.real*c2.real) + (c2.imaginary*c2.imaginary));
	c6.imaginary = ((c1.imaginary*c2.real) - (c1.real*c2.imaginary)) / ((c2.real*c2.real) + (c2.imaginary*c2.imaginary));
}

void complexoper::getnumbers(complex c1, complex c2)
{
	addcomplex(c1, c2);
	cout << "c1 + c2 =  " << c3.real << "+" << c3.imaginary << "i" << endl;

	subcomplex(c1, c2);
	cout << "c1 - c2 =  " << c4.real << "+" << c4.imaginary << "i" << endl;

	mulcomplex(c1, c2);
	cout << "c1 * c2 =  " << c5.real << "+" << c5.imaginary << "i" << endl;

	divcomplex(c1, c2);
	cout << "c1 / c2 =  " << c6.real << "+" << c6.imaginary << "i" << endl;
}
