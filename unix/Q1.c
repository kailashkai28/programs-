#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
int main(int argc , char *argv[])
{
FILE *source ,*dest ;
char str[100];
if(3!=argc)
{
printf("Wrong no. of arguments\n");
exit(0);
}

if(NULL==(source=fopen(argv[1],"r+")))
{
printf("Error in opening file1\n");
exit(0);
}
if(NULL==(dest=fopen(argv[2],"w+")))
{
printf("Error in opening file2\n");
exit(0);
}
pid_t pid;
int fd[2] ;
if(-1==pipe(fd))
{
printf("Error in pipe creation\n");
}
pid = fork();
if(pid<0)
{
printf("fork fail\n");
}
if(pid>0)
{
while(NULL!=fgets(str,99,source))
{
close(fd[0]);
int n=strlen(str);
if(str[n]=='\n')
str[n]='\0';
write(fd[1],str,n+1);
close(fd[1]);
read(fd[0],str,99);
fputs(str,dest);
}
}
return 0;
}
