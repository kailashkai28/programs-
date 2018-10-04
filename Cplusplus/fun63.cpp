#include<iostream>
#include<cstring>
#include "head63.h"
book::book()
{	author= new char[30];
	title= new char[30];
	publisher= new char[30];
}
void book::get_info()
{	cout<<"\nenter the author,title and publisher res."<<endl;
	cin>>author;
	cin>>title;
	cin>>publisher;
	cout<<"enter the price of book";
	cin>>price;
	cout<<"enter the number of copies ";
	cin>>copies;
}
void book::disp()
{	cout<<"Author "<<author;
	cout<<"\nTitle "<<title;
	cout<<"\nPublisher "<<publisher;
	cout<<"\nPrice is "<<price;
	cout<<"\nno. of copies available"<<copies<<endl;
}
void book::sold(int x)
{	if(x>copies)
	cout<<"out of stock";
	else
	{	cout<<"Thank u!!! " ;
		copies-=x;
	}
}
int book::search(char*x,char*y)
{	if((!strcmp(x,title))&&(!strcmp(y,author))==1)
	return copies;
	else
	return 0;
}	

