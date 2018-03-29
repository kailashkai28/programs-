#include<stdio.h>
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int b=n&(n-1);
	if(b==0)
		printf("Number %d is the power of 2",n);
	else
		printf("Number %d is not power of 2 ",n);

	return 0;
}	
