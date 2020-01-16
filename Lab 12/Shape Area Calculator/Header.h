# include <iostream>
using namespace std;

class shape // abstract class
{
public:
	virtual float areacalculator() = 0;
};

class square :public shape
{
private:
	float length;
	float area;
public:
	square(float);
	float areacalculator();

};

class circle :public shape
{
private:
	float radius;
	float area;
public:
	circle(float);
	float areacalculator();
};

class triangle :public shape
{
private:
	float side;
	float area;
public:
	triangle(float);
	float areacalculator();
};
