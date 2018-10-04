#include<iostream>
using namespace std;
int main(){
	int *a=nullptr;
	int b=8;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	char *c;
	char d='d';
	c=&d;
	cout<<"\nChar c="<<*c<<endl<<"d="<<d;
	return 0;
}
