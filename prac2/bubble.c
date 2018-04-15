#include<stdio.h>
#define size 10
int main(){
	int i,j,n,temp;
	int a[size];
	printf("Enter elements(<=10)");
	for(i=0;i<size;i++)
	{	scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{	int flag=0;
		for(j=i+1;j<=size;j++)
		{	if(a[i]>a[j])
			{	temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				flag=1;
			}
		}
	if(!flag) 
		break;
	}
	
	printf("\nSorted elements:");
	for(i=0;i<size;i++)
	{	printf("%d  ",a[i]);	

	}
	
return 0;
}
