#include<stdio.h>
#define z 0.5
#define tarea(x,y)(z*x*y)
#define sarea(x)(x*x)
#define PI 3.14
#define carea(r)(PI*r*r)
int main(){
	float b,h,r,c,t,s,x;
	printf("For triangle \nEnter base and height:");
	scanf("%f%f",&b,&h);
	t=tarea(b,h);
	printf("Area of triangle:%f\n",t);
	printf("For square \nEnter side:");
	scanf("%f",&x);
	s=sarea(x);
	printf("Area of square:%f\n",s);
	printf("For circle \nEnter radius:");
	scanf("%f",&r);
	c=carea(r);
	printf("Area of circle:%f\n",c);
	return 0;
}


