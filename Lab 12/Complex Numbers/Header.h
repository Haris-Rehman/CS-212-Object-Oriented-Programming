# include <iostream>
using namespace std;

class complex
{
private:
	friend class complexoper;
	int real;
	int imaginary;
public:
	complex();
	void setreal(int y);
	void setimaginary(int h);
	int getreal();
	int getimaginary();
};

class complexoper
{
private:
	complex c3;
	complex c4;
	complex c5;
	complex c6;
public:
	void addcomplex(complex c1, complex c2);
	void subcomplex(complex c1, complex c2);
	void mulcomplex(complex c1, complex c2);
	void divcomplex(complex c1, complex c2);
	void getnumbers(complex c1, complex c2);
};
