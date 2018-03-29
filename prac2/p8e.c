//void pointer
#include<stdio.h>
int main(){
	int a=10;
	void *ptr=&a;
	printf("Value of *ptr=%d",*(int*)ptr);
	return 0;
}
