//cin.get()
#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"\nEnter name:";
	while(ch!='\n')
	{	cout<<ch;
		cin.get(ch);
	}
	return 0;
}

