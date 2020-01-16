# include <iostream>
# include <string>
# include <stdexcept>
using namespace std;

class calculator
{
private:
	string exp;
	int lcount; // number of characters in the expression
public:
	calculator() {}
	calculator(string);
	string getexp();
	void operations();
	void countletters();
	void sumdetector();
	void differancedetector();
	void productdetector();
	void divisiondetector();
	void checkerror();
};

class dividebyzeroexception:public runtime_error
{
public:
	dividebyzeroexception() :runtime_error("cannot divide by zero.\n\n") {}
};

class outofbound :public runtime_error
{
public:
	outofbound() :runtime_error("number out of bounds.\n\n") {}
};

class syntaxerror : public exception
{
public:
	syntaxerror() :exception("syntax error.\n\n") {}
};

class emptystring :public exception
{
public:
	emptystring() :exception("result = 0\n\n") {}
};

class substractionerror :public runtime_error
{
public:
	substractionerror() : runtime_error("invalid substraction.\n\n") {}
};
