# include <iostream>
using namespace std;

class base // abstract class
{
public:
	virtual void convert(int) = 0;
};

class decimal :public base
{
private:
	int num;
public:
	void convert(int);
};

class hexa :public base
{
private:
	string asd;
public:
	void convert(int);
};

class octa :public base
{
private:
	int num;
public:
	void convert(int);
};