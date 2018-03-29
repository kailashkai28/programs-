//Types of pointers and their sizes
#include<stdio.h>
int main(){
	
	int i=10,*p=&i;;
	char j='a',*c=&j;
	float k=1.28,*f=&k;
	double l=1.22222222,*d=&l;
	printf("Size of integer pointer: %lu\n",sizeof(p));
	printf("Size of character pointer: %lu\n",sizeof(c));
	printf("Size of float pointer: %lu\n",sizeof(f));
	printf("Size of double pointer: %lu\n",sizeof(d));
	return 0;
}

