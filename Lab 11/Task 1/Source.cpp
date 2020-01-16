# include <iostream>
# include <stdexcept>
# include "Header.h"
using namespace std;

calculator::calculator(float a, float b, char o)
{
	first = a; second = b; operation = o;
}

float calculator::getresult() { return result; }

void calculator::add() { result = first + second; }

void calculator::substract() { result = first - second; }

void calculator::multiply() { result = first * second; }

void calculator::divide()
{
	if (second == 0)
		throw runtime_error("attempted to divide by zero.");
	result = first / second;
}

void calculator::Operation()
{
	if (operation == '+')
		add();

	if (operation == '-')
		substract();

	if (operation == '*')
		multiply();

	if (operation == '/')
		divide();
}