#include<iostream>
using namespace std;
int main(){
	int a=44;
	int *ptr=&a;
	++(*ptr);
	cout<<"A after incrementing:-\n\t\t";
	cout<<a;
	return 0;
}
		
		
