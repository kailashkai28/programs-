#include<iostream>
#include<cstring>
#include "head62.h"
using namespace std;
String::String()
{	length=0;
	str=new char[length+1];
}
String::String(char*x)
{	length=strlen(x);
	str= new char[length+1];
	strcpy(str, x);
}
void String::concat(String &x,String &y)
{	length=x.length +y.length;
	delete str;
	str=new char[length+1];
	strcpy(str,x.str);
	strcat(str, y.str);
}
void String::disp()
{
cout<<"\nlength is\n"<<length;
cout<<"\nstring is \n"<<str;
}
