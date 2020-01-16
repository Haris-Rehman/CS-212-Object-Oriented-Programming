# include <iostream>
# include "Header.h"
# include <string>
# include <sstream>
# include <stdexcept>
using namespace std;

calculator::calculator(string mexp) { exp = mexp; lcount = 0; }

string calculator::getexp() { return exp; }

void calculator::operations()
{
	countletters();
	checkerror();
	divisiondetector();
	productdetector();
	differancedetector();
	sumdetector();
}

void calculator::countletters()
{
	for (int i = 0; exp[i] != '\0'; i++)
	{
		lcount = lcount + 1;
	}
}

void calculator::sumdetector()
{
	int sumdetect = 0;
	for (int i = 0; i < lcount; i++)
	{
		if (exp[i] == '+')
		{
			sumdetect++;
		}
	}
	for (int i = 0; i <= sumdetect; i++) // string main jitny + hain, utni dafa + kary ga
	{
		for (int j = 0; j < lcount; j++)
		{ // sorting out + sign in the string
			if (exp[j] == '+')
			{
				int p = j;
				int qwe = 0;
				int noe = 0; // number of elements before operation perform
				int second = 0;
				for (int k = j + 1; ; k++)
				{
					if (exp[k] == '\0' || exp[k] == '+' || exp[k] == '-' || exp[k] == '*' || exp[k] == '/')
						break;
					noe++;
					second = second * 10;
					second = second + (exp[k] - 48); 
				}
				noe++;
				int first = 0; int mult = 1;
				for (int l = j - 1; ; l--, mult *= 10)
				{
					if (l < 0 || exp[l] == '+' || exp[l] == '-' || exp[l] == '*' || exp[l] == '/')
						break;
					noe++; p--; qwe++;
					int a = mult * (exp[l] - 48);
					first = first + a;
				}
				if (first > 31622)
					throw outofbound();
				if (second > 31622)
					throw outofbound();
				int s = first + second;
				int nod; int test = s;
				for (nod = 0; test != 0; nod++) // conting number of digits in s
				{
					test = test / 10;
				}
				int m1 = 1;
				for (int i = 0; i < nod; i++)
				{
					m1 *= 10;
				}
				m1 /= 10;
				char *sum;//string sum;
				sum = new char[nod];
				int as;
				as = s;
				for (int k = 0; ; k++, m1 /= 10) // insertion of (int s) in (string sum)
				{
					if (k == nod) break;
					int y = as % m1;
					as = as / m1;
					sum[k] = as + 48;
					as = y;
				}
				int df = 0;
				for (int df = 0; df < noe; df++, p++) // inserting sum into exp
				{
					if (df < nod)
						exp[p] = sum[df];
					else
						exp[p] = '\0';
				}
				lcount = lcount - (noe - nod);
				for (int i = j - qwe + nod; i <= lcount; i++) // shifting array
				{
					exp[i] = exp[i + noe - nod];
				}
				//deletion of extra elements
				for (int i = lcount + 1; i <= lcount + noe - nod; i++)
				{
					exp[i] = '\0';
				}
			}
		}
	}
}

void calculator::differancedetector()
{
	int difdetect = 0;
	for (int i = 0; i < lcount; i++)
	{
		if (exp[i] == '-')
		{
			difdetect++;
		}
	}
	for (int i = 0; i <= difdetect; i++) // string main jitny - hain, utni dafa - kary ga
	{
		for (int j = 0; j < lcount; j++)
		{ // sorting out - sign in the string
			if (exp[j] == '-')
			{
				int p = j;
				int qwe = 0;
				int noe = 0; // number of elements before operation perform
				int second = 0;
				for (int k = j + 1; ; k++)
				{
					if (exp[k] == '\0' || exp[k] == '+' || exp[k] == '-' || exp[k] == '*' || exp[k] == '/')
						break;
					noe++;
					second = second * 10;
					second = second + (exp[k] - 48);
				}
				noe++;
				int first = 0; int mult = 1;
				for (int l = j - 1; ; l--, mult *= 10)
				{
					if (l < 0 || exp[l] == '+' || exp[l] == '-' || exp[l] == '*' || exp[l] == '/')
						break;
					noe++; p--; qwe++;
					int a = mult * (exp[l] - 48);
					first = first + a;
				}
				if (first > 31622)
					throw outofbound();
				if (second > 31622)
					throw outofbound();
				if (first < second)
					throw substractionerror();
				int d = first - second;
				int nod; int test = d;
				for (nod = 0; test != 0; nod++) // conting number of digits in d
				{
					test = test / 10;
				}
				int m1 = 1;
				for (int i = 0; i < nod; i++)
				{
					m1 *= 10;
				}
				m1 /= 10;
				char *dif;//string sum;
				dif = new char[nod];
				int as;
				as = d;
				for (int k = 0; ; k++, m1 /= 10) // insertion of (int d) in (string dif)
				{ 
					if (k == nod) break;
					int y = as % m1;
					as = as / m1;
					dif[k] = as + 48;
					as = y;
				}
				int df = 0;
				for (int df = 0; df < noe; df++, p++) // inserting dif into exp
				{
					if (df < nod)
						exp[p] = dif[df];
					else
						exp[p] = '\0';
				}
				lcount = lcount - (noe - nod);
				for (int i = j - qwe + nod; i <= lcount; i++) // shifting array
				{
					exp[i] = exp[i + noe - nod];
				}
				for (int i = lcount + 1; i <= lcount + noe - nod; i++) // deletion of extra characters
				{
					exp[i] = '\0';
				}
			}
		}
	}
}

void calculator::productdetector()
{
	int muldetect = 0;
	for (int i = 0; i < lcount; i++)
	{
		if (exp[i] == '*')
		{
			muldetect++;
		}
	}
	for (int i = 0; i <= muldetect; i++) // string main jitny * hain, utni dafa * kary ga
	{
		for (int j = 0; j < lcount; j++)
		{ // sorting out * sign in the string
			if (exp[j] == '*')
			{
				int p = j;
				int qwe = 0;
				int noe = 0; // number of elements before operation perform
				int second = 0;
				for (int k = j + 1; ; k++)
				{
					if (exp[k] == '\0' || exp[k] == '+' || exp[k] == '-' || exp[k] == '*' || exp[k] == '/')
						break;
					noe++;
					second = second * 10;
					second = second + (exp[k] - 48);
				}
				noe++;
				int first = 0; int mult = 1;
				for (int l = j - 1; ; l--, mult *= 10)
				{
					if (l < 0 || exp[l] == '+' || exp[l] == '-' || exp[l] == '*' || exp[l] == '/')
						break;
					noe++; p--; qwe++;
					int a = mult * (exp[l] - 48);
					first = first + a;
				}
				if (first > 31622)
					throw outofbound();
				if (second > 31622)
					throw outofbound();
				int m = first * second;
				int nod; int test = m;
				for (nod = 0; test != 0; nod++) // conting number of digits in m
				{
					test = test / 10;
				}
				int m1 = 1;
				for (int i = 0; i < nod; i++)
				{
					m1 *= 10;
				}
				m1 /= 10;
				char *mul;//string sum;
				mul = new char[nod];
				int as;
				as = m;
				for (int k = 0; ; k++, m1 /= 10) // insertion of (int m) in (string mul)
				{ 
					if (k == nod) break;
					int y = as % m1;
					as = as / m1;
					mul[k] = as + 48;
					as = y;
				}
				int df = 0;
				for (int df = 0; df < noe; df++, p++) // inserting mul into exp
				{
					if (df < nod)
						exp[p] = mul[df];
					else
						exp[p] = '\0';
				}
				lcount = lcount - (noe - nod);
				for (int i = j - qwe + nod; i <= lcount; i++) // shifting array
				{
					exp[i] = exp[i + noe - nod];
				}
				for (int i = lcount + 1; i <= lcount + noe - nod; i++)// deletion of extra characters
				{
					exp[i] = '\0';
				}
			}
		}
	}
}

void calculator::divisiondetector()
{
	int divdetect = 0;
	for (int i = 0; i < lcount; i++)
	{
		if (exp[i] == '/')
		{
			divdetect++;
		}
	}
	for (int i = 0; i <= divdetect; i++) // string main jitny / hain, utni dafa / kary ga
	{
		for (int j = 0; j < lcount; j++)
		{ // sorting out / sign in the string
			if (exp[j] == '/')
			{
				int p = j;
				int qwe = 0;
				int noe = 0; // number of elements before operation perform
				int second = 0;
				for (int k = j + 1; ; k++)
				{
					if (exp[k] == '\0' || exp[k] == '+' || exp[k] == '-' || exp[k] == '*' || exp[k] == '/')
						break;
					noe++;
					second = second * 10;
					second = second + (exp[k] - 48);
				}
				noe++;
				int first = 0; int mult = 1;
				for (int l = j - 1; ; l--, mult *= 10)
				{
					if (l < 0 || exp[l] == '+' || exp[l] == '-' || exp[l] == '*' || exp[l] == '/')
						break;
					noe++; p--; qwe++;
					int a = mult * (exp[l] - 48);
					first = first + a;
				}
				if (second == 0)
					throw dividebyzeroexception();
				if (first > 31622)
					throw outofbound();
				if (second > 31622)
					throw outofbound();
				int d = first / second;
				int nod; int test = d;
				for (nod = 0; test != 0; nod++) // conting number of digits in d
				{
					test = test / 10;
				}
				int m1 = 1;
				for (int i = 0; i < nod; i++)
				{
					m1 *= 10;
				}
				m1 /= 10;
				char *div;//string sum;
				div = new char[nod];
				int as;
				as = d;
				for (int k = 0; ; k++, m1 /= 10) // insertion of (int d) in (string div)
				{ 
					if (k == nod) break;
					int y = as % m1;
					as = as / m1;
					div[k] = as + 48;
					as = y;
				}
				int df = 0;
				for (int df = 0; df < noe; df++, p++) // inserting div into exp
				{
					if (df < nod)
						exp[p] = div[df];
					else
						exp[p] = '\0';
				}
				lcount = lcount - (noe - nod);
				for (int i = j - qwe + nod; i <= lcount; i++) // shifting array
				{
					exp[i] = exp[i + noe - nod];
				}
				for (int i = lcount + 1; i <= lcount + noe - nod; i++)// deletion of extra characters
				{
					exp[i] = '\0';
				}
			}
		}
	}
}

void calculator::checkerror()
{
	if (lcount == 0)
	{
		throw emptystring();
	}
	for (int i = 0; i < lcount; i++)
	{
		if (exp[i] !='0' && exp[i] != '1' && exp[i] != '2' && exp[i] != '3' && exp[i] != '4' && exp[i] != '5' && exp[i] != '6' && exp[i] != '7' && exp[i] != '8' && exp[i] != '9' && exp[i] != '+' && exp[i] != '-' &&exp[i] != '*' &&exp[i] != '/')
		{
			throw syntaxerror();
		}
	}
	if (exp[0] !='0' && exp[0] != '1' && exp[0] != '2' && exp[0] != '3' && exp[0] != '4' && exp[0] != '5' && exp[0] != '6' && exp[0] != '7' && exp[0] != '8' && exp[0] != '9')
	{
		throw syntaxerror();
	}
	if (exp[lcount - 1] != '0' && exp[lcount - 1] != '1' && exp[lcount - 1] != '2' && exp[lcount - 1] != '3' && exp[lcount - 1] != '4' && exp[lcount - 1] != '5' && exp[lcount - 1] != '6' && exp[lcount - 1] != '7' && exp[lcount - 1] != '8' && exp[lcount - 1] != '9')
	{
		throw syntaxerror();
	}
	for (int i = 1; i < lcount - 1; i++)
	{
		if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')
		{
			if (exp[i + 1] == '+' || exp[i + 1] == '-' || exp[i + 1] == '*' || exp[i + 1] == '/')
			{
				throw syntaxerror();
			}
			if (exp[i - 1] == '+' || exp[i - 1] == '-' || exp[i - 1] == '*' || exp[i - 1] == '/')
			{
				throw syntaxerror();
			}
		}
	}
}
