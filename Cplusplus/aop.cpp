#include<iostream>
using namespace std;
int main(){
	int f,d,s,q,w,n;
	cout<<"\nEnter the values of f,d,s,q,w:";
	cin>>f>>d>>s>>q>>w;
	cout<<"\nEnter the size of an array:";
	cin>>n;
	int *a[n];
	
	a[0]=&f;
	a[1]=&d;
	a[2]=&s;
	a[3]=&q;
	a[4]=&w;

	for(int i=5;i<n;i++)
	{	a[i]=NULL;
	}
	cout<<"\nElements are:";
	for(int i=0;i<n;i++)
	{	cout<<"\n\ta["<<i<<"]"<<"="<<a[i]<<endl<<"Value:"<<*a[i];
	}
	return 0;
}



