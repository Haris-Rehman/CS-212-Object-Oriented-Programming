#include<iostream>
#include"Header.h"
using namespace std;

float num::averagecalculator(float a, float b, float c, float d)
{
	if (a<0 || a>100)
		throw "number out of bounds";
	else
		this->a = a;

	if (b<0 || b>100)
		throw "number out of bounds";
	else
		this->b = b;

	if (c<0 || c>100)
		throw "number out of bounds";
	else
		this->c = c;

	if (d<0 || d>100)
		throw "number out of bounds";
	else
		this->d = d;

	if (a > 0 && a<100 && b>0 && b<100 && c>0 && c<100 && d>0 && d < 100)
		return (this->a + this->b + this->c + this->d) / 4;
}
