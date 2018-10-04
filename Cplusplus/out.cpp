#include<iostream>
using namespace std;
int main(){
	int a[]={1,2,3,4,5};
	int *k;
	k=&a[0];
	for(int i=0;i<5;i++)
	{	cout<<*k;
		k++;
		cout<<endl;
	}
	return 0;
}

