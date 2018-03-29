#include<stdio.h>
#include<stdlib.h>
#include "c.h"
int a=0;

void main(){

	int n,op;
	while(1){

		printf("\n\t1. Addition\n\t2. Subtraction \n\t3. Multiplication \n\t4. Division \n\t5. Exit\n");
		printf("\nEnter number : ");
		scanf("%d",&n);
		printf("\nEnter the Operation : ");
		scanf("%d",&op);	
		a= calc(n,op);
		printf("\nResult is : %d\n",a);

	}

}

