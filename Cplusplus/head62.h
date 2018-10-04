#include<iostream>
#include<cstdio>
using namespace std;
class String
{
	char*str;
	int length;
	public:
	String();
	String(char*);
	void concat(String&,String&);
	void disp();
};
