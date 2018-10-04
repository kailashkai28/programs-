#include<iostream>
#include<cstring>
using namespace std;
class book
{	char *author,*title,*publisher;
	int price;
	int copies;
	public:
	book();
	void get_info();
	void disp();
	void sold(int);
	int search(char*,char*);
};
