#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
	printf("Hello world from process id : %lu\n",(long)getpid());
	exit(0);
}
