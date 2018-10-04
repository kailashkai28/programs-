#include<iostream>
#include<cstring>
using namespace std;
class payroll
{	int eid;
	char name[30];
	int salary;
	int sales;
	int comm;
	char grade;
	public:
	void get();
	void cal();
	void show();
};
void payroll::get(){
	cout<<"Enter name:";
	cin.ignore();
	cin.getline(name,30);
	cout<<"\nEnter id:";
	cin>>eid;
	cout<<"\nEnter salary:";
	cin>>salary;
	cout<<"\nEnter sales:";
	cin>>sales;

}
void payroll::cal(){
	if(sales<5000)
	{	comm=0;
		grade='F';
	}
	else if(sales>=5000&&sales<10000)
	{	comm=0.15;
		grade='D';
	}
	else if(sales>=10000&&sales<20000)
	{	comm=0.20;
		grade='C';
	}
	else if(sales>=20000&&sales<50000)
	{	comm=0.25;
		grade='B';
	}
	else
	{	comm=0.30;
		grade='A';
	}
}
void payroll::show(){
	cout<<"\nEmployee name:"<<name<<"\tGrade:"<<grade;
}
int main(){
	int n;
	cout<<"Enter the no. of details:";
	cin>>n;
	payroll p[n];
	for(int i=0;i<n;i++)
	{	cout<<"Detail "<<i+1<<":"<<endl;
		p[i].get();
	}
	for(int i=0;i<n;i++)
	{	p[i].cal();
	}
	for(int i=0;i<n;i++)
	{
		p[i].show();
	
	}
	return 0;
}



