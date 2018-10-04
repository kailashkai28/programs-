#include<iostream>
#include<cstring>
#include "head12.h"
#include<cstdlib>
using namespace std;
Employee::Employee(){
	id=0;
	name="X";
	dob=0;
	salary=0;
}
Employee::Employee(Employee&e){
	id=e.id;
	name=e.name;
	dob=e.dob;
	salary=e.salary;
}
istream& operator>>(istream& din,Employee& e){
	cout<<"\nId:";
	din>>e.id;
	cout<<"\nName:";
	din>>e.name;
	cout<<"\nDate of birth:";
	din>>e.dob;
	cout<<"\nSalary:";
	din>>e.salary;
	return din;
}
ostream& operator<<(ostream& dout,Employee& e){
	dout<<"\n\tId\tName\tDOB\tSalary\n\t---\t-------\t-----\t--------\n\t"<<e.id<<"\t"<<e.name<<"\t"<<e.dob<<"\t"<<e.salary;
	return dout;
}
