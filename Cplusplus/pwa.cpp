#include<iostream>
using namespace std;
int main(){
	int a[5]={1,2,3,4,5};
	int len=sizeof(a)/sizeof(int);
	cout<<"length:"<<len;
	int *ptr;
	ptr=a;
	int num;
	int flag=0;
	cout<<"\nEnter a number:";
	cin>>num;

	for(int i=0;i<len;i++)
	{if(num==*ptr)
		{	flag=1;
			break;
		}
	else
	{	flag=0;


	}
	
	ptr++;

	}
	if(flag==1)
		cout<<"present";
	else
		cout<<"Not present";

	
	return 0;
}
