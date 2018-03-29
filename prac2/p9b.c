//Rotates an array of integers a given number of positions
#include<stdio.h>
#define size 10
void rot(int a[]);
int main(){
	int a[size],n;
	printf("Enter array elements(<10)");
	for(int i=0;i<size;i++)
	{	scanf("%d",&a[i]);
	}
	printf("Enter the number of position to rotate:");
	scanf("%d",&n);
	printf("\nActual array:");
	for(int i=0;i<size;i++)
	{	printf("%d",a[i]);
	}
	for(int i=1;i<=n;i++)
	{	rot(a);
	}
	printf("\nArray after rotation:");
	for(int i=0;i<size;i++)
	{	printf("%d",a[i]);
	}
	return 0;
}
void rot(int a[size]){
	int last;
	last=a[size-1];
	for(int i=size-1;i>0;i--)
	{	a[i]=a[i-1];
	}
	a[0]=last;
}
