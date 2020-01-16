#include<iostream>
#include<string>
#include"Header.h"
Employee::Employee()
{
	scalery = 5000; // basic pay
	bonus = 0; // initial bonus
}
void Employee::setscalery(int a)
{
	if (a > 0)
		scalery = a;
	else
		cout << "enter a valid number" << endl;
}
void Employee::setbonus(int a)
{
	if (a > 0)
		bonus = a;
	else
		cout << "enter a valid number" << endl;
}
int Employee::getscalery() { return scalery; }
int Employee::getbonus() { return  bonus; }
Team::Team()
{
	noe = 4; // initial number of employees
	scount = 0; // initial success count
	employees = new Employee[noe];
}
Team::~Team()
{
	delete[] employees;
}
int Team::getemployees() { return noe; }
bool Team::completion()
{ // project successful / failed
	int x = rand() % 2;
	if (x == 1)
	{
		cout << "project successful" << endl;
		return true;
	}
	else
	{
		cout << "project failed\t";
		return false;
	}
}
void Team::setteambonus(int b) { tbonus = b; }
int Team::getteambonus() { return tbonus; }
void Team::dividebonus()
{
	int indbonus = tbonus / noe; // bonus is divided among team members
	for (int i = 0; i < noe; i++)
	{
		employees[i].setbonus(indbonus);
	}
}
void Team::setsucesscount() { scount++; }
int Team::getsucesscount() { return scount; }
int Team::getscaleries()
{
	int totalscaleries = 0;
	for (int i = 0; i < noe; i++)
	{
		totalscaleries = totalscaleries + employees[i].getscalery();
	}
	return totalscaleries;
}
Company::Company()
{
	teams = new Team[2];
}
Company::~Company()
{
	delete[] teams;
}
void Company::givebonus(int n, int k)
{
	for (int i = 0; i < n; i++)
	{
		cout << "for project " << i + 1 << "\t";
		if (teams[k].completion())
		{
			teams[k].setteambonus(5000);
			teams[k].setsucesscount();
		}
		else
			cout << "(no bonus for team)" << endl;
	}
	cout << endl << "sucess count of team " << k + 1 << " is " << teams[k].getsucesscount() << endl;
	cout << "total team bonus of team " << k + 1 << " is Rs " << (teams[k].getsucesscount() *teams[k].getteambonus()) << endl;
}
int Company::getprofit() { return profit; }
void Company::display()
{
	int salariesexpenditure = 0;
	for (int i = 0; i < 2; i++)
	{
		salariesexpenditure = salariesexpenditure + teams[i].getscaleries();
	}
	profit = (funds - salariesexpenditure);//determining total profit of company
	cout << "total profit is " << getprofit() << endl;
	int inc1 = (100 * (teams[0].getsucesscount())); // increase for one project sucess is 100 for the team
	cout << "success count is " << teams[0].getsucesscount() << endl;
	if (1)
	{
		int	employeeincrement1 = inc1 / teams[0].noe;
		cout << "\nteam # 1:\n";
		for (int a = 0; a < teams[0].noe; a++)
		{
			teams[0].employees[a].scalery = teams[0].employees[a].scalery + employeeincrement1;
			cout << "\tpay of employee " << a + 1 << " =\t" << teams[0].employees[a].scalery << endl;
		}
		profit = profit - inc1;
		int inc2 = (100 * (teams[1].getsucesscount()));
		int employeeincrement2 = inc2 / teams[1].noe;
		cout << "\nteam # 2:\n";
		for (int a = 0; a < teams[1].noe; a++)
		{
			teams[1].employees[a].scalery = teams[1].employees[a].scalery + employeeincrement2;
			cout << "\tpay of employee " << a + 1 << " =\t" << teams[1].employees[a].scalery << endl;
		}
		cout << endl;
	}
	else { cout << "\tno increment " << endl; }
}
void Company::addemployees(int k, int h)
{
	int a = teams[k].noe;
	teams[k].noe = teams[k].noe + h; // increase no. of employees
	int b = teams[k].noe;
	for (int i = a; i < b; i++)	
	{
		teams[k].employees[i].scalery = 5000;//initiallize the scalery of new added employees
	}
	cout << "\nno. of members in team " << k + 1 << " after increment is " << teams[k].getemployees() << endl;
}
void Company::substractemployees(int k, int h)
{
	if (h < teams[k].noe)
		teams[k].noe = teams[k].noe - h; // decrease number of employees
	else
		cout << "cannot substract employs" << endl;
	cout << "\nno. of members in team " << k + 1 << " after decrement is " << teams[k].getemployees() << endl;
}
int Company::decideteam()
{
	int a = rand() % 2 + 1;
	if (a == 1)
		return 1;
	if (a == 2)
		return 2;
	return 0;
}
