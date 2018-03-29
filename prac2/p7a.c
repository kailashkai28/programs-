#include<stdio.h>
float temper(float,float);
int main(){
	float c,f,t;
	printf("Enter the temperature in fahrenheit:");
	scanf("%f",&f);
	t=temper(f,c);
	printf("Temperature in celsius: %f",t);	
	return 0;
}
float temper(float f1,float c1)
{
	c1=(f1-32)*5/9;
	return c1;
}
