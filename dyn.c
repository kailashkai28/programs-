#include<stdio.h>
#include<stdlib.h>
int main(){
	int a;
	int *p;
	printf("Enter how many elements:");
	scanf("%d",&a);
	p=(int*)malloc(a*sizeof(int));
	printf("\nEnter %d elements:",a);
	for(int i=0;i<a;i++)
	{	scanf("%d",p+i);
	}
	printf("\nElements:");
	for(int i=0;i<a;i++)
	{	printf("a[%d]:%d\n",i,*(p+i));
	}
	free(p);
	p=NULL;
	return 0;
}


