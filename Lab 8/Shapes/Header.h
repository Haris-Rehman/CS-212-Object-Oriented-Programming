# include <iostream>
using namespace std;
class shape
{
protected:
	int length;
	int width;
public:
	shape();
	shape(int, int);
	shape(const shape &a);
	void setlength(int l);
	int getlength() const;
	void setwidth(int w);
	int getwidth()const;
};
class line :public shape
{
public:
	void draw();
};
class square: public shape
{
public:
	void draw();
};
class rectangle : public shape
{
public:
	void draw();
};
class triangle : public shape
{
public:
	void draw();
};
class circle : public shape
{
public:
	void draw();
};
