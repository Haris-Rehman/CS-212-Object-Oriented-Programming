# include <iostream>
# include <stdexcept>
using namespace std;

class calculator
{
private:
	float first, second;
	char operation;
	float result;
public:
	calculator(float, float, char);
	float getresult();
	void add();
	void substract();
	void multiply();
	void divide();
	void Operation();
};