#include<iostream>
#include<cstdlib>
#include<cstring>
#include "head516.h"
bank::bank(){
		strcpy(name,"kai");
		accno=0;
		strcpy(type,"Savings");
		balance=0.0;
}
bank::bank(char*a,long int b,char*c,long double d){
		strcpy(name,a);
		accno=b;
		strcpy(type,c);
		balance=d;
}
bank::bank(bank&s){
		strcpy(name,s.name);
		accno=s.accno;
		strcpy(type,s.type);
		balance=s.balance;
}
void bank::get(){
	cout<<"Enter details:";
	cout<<"\n\tName:";
	cin>>name;
	cout<<"\n\tAccount number:";
	cin>>accno;
	cout<<"\n\tType of account:";
	cin>>type;
}
long double bank::deposit(long double amount){

	balance+=amount;
	return balance;
}
long double bank::withdraw(long double amount){

	if(amount>balance)
		cout<<"Not possible...no enough money...transaction cancelled!!!";
	else
		balance-=amount;
	return balance;
}
void bank::display(){
	cout<<"Details:\n\t\tName\t\tBalance\n\t\t=========\t\t============\n\t\t"<<name<<"\t\t"<<balance<<endl;
}

