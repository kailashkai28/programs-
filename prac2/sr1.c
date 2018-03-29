#include<stdio.h>
int fun1(unsigned int a);
int main(){
	int count=0;
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	while(n>0)
	{
	n&=(n-1);
	count++;
	}
	printf("Number of 1s:%d",count);
	printf("Number of 0s:%d",fun1(n));	
	return 0;
}
int fun1(unsigned int a){
	int c=0;
	if(0==a)
		return 1;
	while(a>0){
		if(0==(a&1))
			c++;
			a>>=1;
		
	}
	return c;
	
}

	
