#include<stdio.h>
#include "head.h"
void insertion(int a[10],int n){
	int i,j,temp;
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{	temp=a[i];
		j=i-1;
		while(temp<a[j]&&j>=0)
		{	a[j+1]=a[j];
			j=j-1;
		}
	a[j+1]=temp;
	}
	printf("Sorted elements:");
	for(i=0;i<n;i++)
	{	printf("%d ",a[i]);
	}
}
		
