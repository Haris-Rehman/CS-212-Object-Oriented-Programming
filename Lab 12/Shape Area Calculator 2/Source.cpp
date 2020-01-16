# include <iostream>
# include "Header.h"
using namespace std;

sphere::sphere(float r)
{
	radius = r;
}

void sphere::calculatearea()
{
	area = 4 * 3.14*radius*radius;
}

void sphere::calculatevolume()
{
	volume = 4 * 3.14*radius*radius*radius / 3;
}

float sphere::getarea()
{
	return area;
}

float sphere::getvolume()
{
	return volume;
}

cube::cube(float l)
{
	length = l;
}

void cube::calculatearea()
{
	area = 6*length*length;
}

void cube::calculatevolume()
{
	volume = length*length*length;
}

float cube::getarea()
{
	return area;
}

float cube::getvolume()
{
	return volume;
}

cone::cone(float r, float h)
{
	height = h;
	radius = r;
}

void cone::calculatearea()
{
	area = 3.14*radius*(radius + sqrt(height*height +radius*radius)); // A=?r(r+h2+r2)
}

void cone::calculatevolume()
{
	volume = 3.14*radius*radius*height / 3;
}

float cone::getarea()
{
	return area;
}

float cone::getvolume()
{
	return volume;
}