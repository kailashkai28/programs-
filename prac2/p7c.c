#include<stdio.h>
int reverse(int);
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int c=reverse(n);
	printf("Reverse is: %d",c);
	return 0;
}
int reverse(int a){
	int temp,r,rev;
	temp=a;
	while(a>0)
	{
		r=a%10;
		rev=rev*10+r;
		a/=10;
	}
	return rev;
}	
