#include<stdio.h>
#include "head.h"
void selection(int a[10],int n){
	int i,j,temp,min,loc;
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{	min=a[i];
		loc=i;
		for(j=i+1;j<n;j++)
		{		
		if(min>a[j])
		{	min=a[j];
			loc=j;
		}
		}
		
			temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
		
	
	}
	
	printf("Sorted elements:");
	for(i=0;i<n;i++)
	{	printf("%d ",a[i]);
	}
}
