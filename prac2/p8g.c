//Call by value
#include<stdio.h>
void cbv(int,int);
int main(){
	int a,b;
	printf("\t~~~~Call by value~~~~");
	printf("\nEnter two numbers:");
	scanf("%d%d",&a,&b);
	printf("\nValues before calling function cbv(): a=%d b=%d",a,b);
	cbv(a,b);
	printf("\nValues after calling function cbv(): a=%d b=%d",a,b);
	return 0;
}
void cbv(int x,int y){
	x=x+1;
	y=y-2;
	printf("\nValues inside the function cbv(): a=%d, b=%d",x,y);
}
