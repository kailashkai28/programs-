//Operations on pointers
#include<stdio.h>
int main(){
	int a=10,b=11,c=12,d=13;
	int *p=&a,*q=&b,*w=&c,*r=&d;
	printf("*p=%d\n",*p);
	printf("*q=%d\n",*q);
	*p++;
	*q--;
	printf("After incrementing:*p=%d\n ",*p);
	printf("After decrementing:*q=%d\n",*q);
	printf("Difference between *r and *w=%d\n",*r-*w);
	return 0;
}

	
