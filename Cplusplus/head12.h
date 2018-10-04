#include<iostream>
using namespace std;
class Employee
{	int id;
	char* name;
	int dob;
	long int salary;
	public:
	Employee();
	Employee(Employee&);
	friend istream& operator>>(istream&,Employee&);
	friend ostream& operator<<(ostream&, Employee&);
};

