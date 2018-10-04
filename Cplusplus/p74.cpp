#include<iostream>
#include "head74.h"
using namespace std;
int main()
{
	char st1[1000],st2[1000];
	String s1,s2;
	cout<<"Enter 1st string:";
	s1.input();
	cout<<"\nEnter 2nd string:";
	s2.input();
	if(s1==s2)
	cout<<"Two strings are equal";
	else
	cout<<"Two string are not equal";
	return 0;
}
