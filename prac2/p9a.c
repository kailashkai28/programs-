//Maximum and second maximum number in an array of integers
#include<stdio.h>
#define size 10
void maxx(int a[],int,int);
int main(){
	int max,max2,a[size];
	printf("Enter elements(<10):");
	for(int i=0;i<size;i++)
	{	scanf("%d",&a[i]);
	}
	maxx(a,max,max2);
	return 0;
}
void maxx(int a[],int max,int max2){
	max=a[0];
	for(int i=0;i<size;i++)
	{	if(max<a[i])
			max=a[i];
	}
	max2=a[0];
	for(int i=1;i<size;i++)
	{	if(max2<a[i]&&max>a[i])
			max2=a[i];
	}
	printf("Maximum: %d\nSecond maximum: %d \n",max,max2);
}

	
