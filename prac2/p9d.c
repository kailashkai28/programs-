#include<stdio.h>
#define r 10
#define s 15
#define t 20
void match(int a[],int b[],int c[]);
int main(){
	int a[r],b[s],c[t];
	printf("Enter elements of array A:");	
	for(int i=0;i<r;i++)
	{	scanf("%d",&a[i]);
	}
	printf("Enter elements of array B:");		
	for(int i=0;i<s;i++)
	{	scanf("%d",&b[i]);
	}
	printf("Common elements are:");
	match(a,b,c);
	return 0;
}
void match(int a[r],int b[s],int c[t]){
	int k=0;
	for(int i=0;i<r;i++)
	{	for(int j=0;j<s;j++)
		{	if(a[i]==b[j])
			{	c[k]=a[i];
				k++;
				break;
			}
		}
	}
	for(int i=0;i<k;i++)
	{	printf("%d",c[i]);
	}
}
