# include <iostream>
using namespace std;

class shape
{ // abstract class
private:
	float area;
	float volume;
public:
	virtual float getvolume() = 0;
	virtual float getarea() = 0;
	virtual void calculatearea() = 0;
	virtual void calculatevolume() = 0;
};

class sphere :public shape
{
private:
	float radius;
	float area;
	float volume;
public:
	sphere(float);
	float getarea();
	float getvolume();
	void calculatearea();
	void calculatevolume();
};

class cube :public shape
{
private:
	float length;
	float area;
	float volume;
public:
	cube(float);
	float getarea();
	float getvolume();
	void calculatearea();
	void calculatevolume();
};

class cone :public shape
{
private:
	float radius;
	float height;
	float area;
	float volume;
public:
	cone(float, float);
	float getarea();
	float getvolume();
	void calculatearea();
	void calculatevolume();
};
