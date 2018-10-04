#include<stdio.h>
int main(){
	int size;
	printf("Enter size of array:");
	scanf("%d",&size);
	int a[size];
	printf("\nEnter elements:");
	for(int i=0;i<size;i++)
	{	scanf("%d",&a[i]);
	}
	printf("\nElements are:");
	for(int i=0;i<size;i++)
	{	printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}
