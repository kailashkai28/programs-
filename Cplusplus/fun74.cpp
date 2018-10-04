#include<iostream>
#include "head74.h"
using namespace std;
int String::operator==(String s2)
{
	int t=strcmp(str,s2.str);
	if(t==0)
	t=1;
	else
	t=0;
	return t;
}
