#include<stdlib.h>
#include<stdio.h>
#include"c.h"
int calc(int x,int y){
	extern int a;
	int result=0;
	switch(y){
		case 1:	printf("Addition is performed \n");
			result= a + x ;
			return result;
			break;
		case 2:	printf("Subtraction is performed \n");
			result= a - x;
			return result;
			break;
		case 3:	printf("Multiplication is performed \n");
			result= a * x;
			return result;
			break;
		case 4:	printf("Division is performed \n");
			result= a / x;
			return result;
			break;
		case 5: exit(0);
			break;
		default: printf("\n\t!!!Wrong Input!!!\n\t Try Again");
			return a;
	}
						
}
