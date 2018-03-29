//Constant pointer implementation
#include<stdio.h>
int main(void)
{
	int v1;
	int *const ptr=&v1;
	v1=10;
	*ptr=10;
	//ptr=&v2; Will give read-only variable error
	printf("v1=%d\n", v1);	
	printf("*ptr=%d\n", *ptr);
	return 0;
}
