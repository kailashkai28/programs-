#include<iostream>
using namespace std;
int main(){
	char name[20];
	cout<<"Enter ur name:";
	cin>>name;
	cout<<"\nName is:"<<name;
	cout<<"\nEnter ur name again:";
	cin.getline(name,19);
	cout<<"\nAgain,..Name is:"<<name;
	cout<<"\nEnter ur name again:";
	cin.getline(name,19);
	cout<<"\nAgain,..Name is:"<<name;
	return 0;
}

