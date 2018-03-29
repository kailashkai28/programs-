#include<stdio.h>
void prime(unsigned int,int);
int main(){
	unsigned int n;
	int flag=0;
	printf("Enter a number:");
	scanf("%d",&n);
	prime(n,flag);
	return 0;
}
void prime(unsigned int a,int f){
	if(a==1)
		f=1;
	for(int i=2;i<=a/2;i++)
	{	if(a%i==0)
		{	f=1;
			break;
		}
	
	}
	if(f==0)
		printf("Prime no.");
	else
		printf("Not prime");
}

