#include<iostream>
#include "head12.h"
using namespace std;
int main(){
	Employee e1;
	cout<<e1;
	Employee e2(e1);
	cout<<e2;
	Employee e3[5];
	int ch,n;
	do{
		cout<<"\n\t-0-0-0-0Employee Menu-0-0-0-0\n\t\t1.Add details\t2.Display details\t3.Exit\nChoose an option(1-3):";
		cin>>ch;


		switch(ch){
			case 1:
				
				cout<<"\nEnter the number of employees:";
				cin>>n;
				for(int i=0;i<n;i++)
			       {	cout<<"\nEnter details of "<<i+1<<" employee:";	
				        cin>>e3[i];
			       }
			       break;
			case 2:cout<<"\nDetails:";
			       for(int i=0;i<n;i++){
				       cout<<"\nEmployee "<<i+1<<":";
				       cout<<e3[i];
			       }
			       break;
			case 3:exit(0);
			       break;
			default: cout<<"\nWrong choice entered!!!";
				 break;

		}
	}while(ch<=3);
	return 0;
}



