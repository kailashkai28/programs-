//Pointer to constant
#include<stdio.h>
int main(){
	int v1=10;
	const int* ptr=&v1;
	v1=20;
	//ptr=10;
	printf("v1=%d\n",v1);
	return 0;
}
