//Call by reference
#include<stdio.h>
void cbr(int*,int*);
int main(){
	int a=2,b=3;
	printf("\t@@@@Call by reference@@@@");
	printf("\nValues of a and b before calling function cbr(): a=%d b=%d",a,b);
	cbr(&a,&b);	
	printf("\nValues of a and b after calling function cbr(): a=%d b=%d",a,b);
	return 0;
}
void cbr(int *x,int *y){
	*x=*x-1;
	*y=*y+2;
	printf("\nValues of a and b inside the function cbr(): a=%d b=%d",*x,*y);
}
