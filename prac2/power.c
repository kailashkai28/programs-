#include<stdio.h>
int main(){
	int count=0,count1=0;
	unsigned int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int mem=sizeof(int)*8;
	for(int i=0;i<mem;i++)
	{	if(n&1)
			count++;
		else
			count1++;
		n=n>>1;
	}
	printf("Number of 1s: %d",count);
	printf("\nNumber of 0s: %d",count1);
	return 0;
}
