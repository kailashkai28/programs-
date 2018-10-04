#include<iostream>
#include<cstring>
#include "head62.h"
int main()
{
	char s1[30],s2[40];
	gets(s1);
	gets(s2);
	String s(s1),t(s2),u,v;
	u.concat(s,t);
	u.disp();
	return 0;
}
