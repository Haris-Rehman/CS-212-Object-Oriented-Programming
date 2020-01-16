#include<iostream>
class position
{
private:
	friend class rectangle;
	friend class circle;
	int xloc; // x location
	int yloc; // y location
public:
	void setxloc(int);
	void setyloc(int);
	int getxloc();
	int getyloc();
};
class shape
{
private:
	position p;
	friend class canvas;
	int area;
	char linecol; // line colour
	char fillcol; // fill colour
public:
	
	virtual int calcarea() = 0; // VIRTUAL FOUNCTION
	void setlinecol(char);
	void setfillcol(char);
	char getlinecol();
	char getfillcol();
	void getpositions(int, int);
};
class rectangle :public shape
{
private:
	position pr;
	static int rect; // number of rectangles present at anytime
	friend class canvas;
	int length;
	int width;
public:
	rectangle();
	int  calcarea(); // calculate area
	void setlength(int);
	void setwidth(int);
	int  getlength();
	int getwidth();
	void setrectangleposition(int, int);
	void displayrectangleposition();
};
class circle :public shape
{
private:
	position pc;
	friend class canvas;
	int radius;
	static int cir; // number of circles present at anytime
public:
	circle();
	void setradius(int);
	int getradius();
	int calcarea(); // calculate area
	void setcircleposition(int, int);
	void displaycircleposition();
};
class canvas
{
private:
	int nor; // number of rectangles
	int noc; // number of circles
	rectangle *rectangles;
	circle *circles;
public:

	void setnor(int);
	int getnor();
	void setnoc(int);
	int getnoc();
	canvas();
	~canvas();
	void operation(); // operations to be performed
	void removecircle(int);
	void removerectangle(int);
	void make(); // initiallizing using new operator
};
