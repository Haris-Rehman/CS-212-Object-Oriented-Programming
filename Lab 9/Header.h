#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
	friend class Company;
	friend class Team;
	int scalery; // scalery of each employee
	int bonus; // bonus if team completes the project
public:
	Employee();
	void setscalery(int a);
	void setbonus(int a);
	int getscalery();
	int getbonus();
};
class Team
{
private:
	friend class Company;
	int noe; // number of employees
	Employee *employees; // composition
	int tbonus; // team bonus
	int scount; // success count
public:
	Team();
	~Team();
	int getemployees();
	bool completion(); // project completion
	void setteambonus(int);
	int getteambonus();
	void dividebonus();
	void setsucesscount();
	int getsucesscount();
	int getscaleries();
};
class Company
{
private:
	Team *teams; // composition
	const int funds = 1000000; // funds for company
	int profit;
public:
	Company();
	~Company();
	void givebonus(int, int);
	int getprofit();
	void display();
	void addemployees(int, int);
	void substractemployees(int, int);
	int decideteam(); // decide team to assign the project
};
