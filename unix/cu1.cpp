
#include<stdlib.h>
#include<stdio.h>
#include<dirent.h>
int main(int argc, char *argv[])
{	DIR *dp;
	struct dirent *dirp;

	if(argc!=2)
	{	err_quit("ls directory_name ");
	}
	if((dp=opendir(argv[1]))==NULL)
	{	err_sys("can't open %s",argv[1]);
	}
	while((dirp=readdir(dp))!=NULL)
	{	printf("%s",dirp->d_name);
	}
	closedir(dp);
	exit(0);
}

