#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class bank{
	char name[30];
	long int accno;
	char type[20];
	long double balance;
	public:
	bank();
	bank(char*,long int,char*,long double);
	bank(bank&);
	void get();
	long double deposit(long double);
	long double withdraw(long double);
	void display();
};
