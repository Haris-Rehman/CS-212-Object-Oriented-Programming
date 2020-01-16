#include<iostream>
#include"Header.h"
using namespace std;

square::square(float len) { length = len; }

float square::areacalculator()
{
	area = length*length;
	return area;
}

circle::circle(float rad) { radius = rad; }

float circle::areacalculator()
{
	area = 3.14*radius*radius;
	return area;
}

triangle::triangle(float len) { side = len; }

float triangle::areacalculator()
{
	area = (0.433*(side*side));
	return area;
}