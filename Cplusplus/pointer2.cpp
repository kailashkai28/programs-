#include<iostream>
using namespace std;
int main(){
	int *p,*q;
	int z=9;
	p=&z;
	q=p;
	cout<<"p="<<p<<endl<<"q="<<q<<endl<<"*p="<<*p<<endl<<"*q="<<*q<<endl<<"Adding 1 to p:"<<p+1<<endl<<"Adding 1 to *p:"<<*p+1<<endl<<"Adding 1 to q:"<<q+1<<endl<<"Adding 1 to *q:"<<*q+1;
	return 0;
}
