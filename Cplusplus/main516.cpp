#include<iostream>
#include<cstdlib>
#include<cstring>
#include "head516.h"
int main(){
	bank b1;
	bank b2("Kailash chandra",110010,"Savings",15000);
	b2.display();
	bank b3(b2);
	b3.display();
	bank b4(b1);
	b4.display();
	int ch;
	long double amount;
	long double depos;
	long double with;
	do{
		cout<<"\n\t+=+=+=Bank Menu+=+=+=\n\t1.Open account\n\t2.Deposit amount\n\t3.Withdraw amount\n\t4.Display details\n\t5.Exit\n\tEnter choice(1-5):";
		cin>>ch;
		switch(ch){
			case 1: b1.get();
				break;
			case 2: cout<<"\n\tEnter the amount to deposit:";
				cin>>amount;
				depos=b1.deposit(amount);
				cout<<"\nAmount after deposit:"<<depos<<endl;
				break;
			case 3: cout<<"\n\tEnter the amount to withdraw:";
				cin>>amount;
				with=b1.withdraw(amount);
				cout<<"\nAmount after withdraw:"<<with<<endl;
				break;
			case 4: b1.display();
				break;
			case 5: exit(0);
				break;
			default:cout<<"Wrong choice!!!!";
				break;
		}
	}while(ch<=5);		
	return 0;
}




