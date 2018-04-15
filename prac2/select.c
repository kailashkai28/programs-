#include<stdio.h>
#include "head.h"
int main(){
	int n,a[10];
	printf("#####Selection sort#####");
	printf("\nEnter the no. of elements:");	
	scanf("%d",&n);
	selection(a,n);
	return 0;
}
