#include<iostream>
#include<cstring>
using namespace std;
class String
{
	char str[1000];
	public:
	void input(){gets(str);}
	int operator==(String);
};
