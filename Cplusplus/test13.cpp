#include<iostream>
#include<cstring>
using namespace std;
class String
{	int len;
	char *p;
	public:
	String();
	String(const char*);
	String(const String&);
	friend String operator+(const String&,const String&);
	friend int operator<=(const String&,const String&);
	friend void show(const String);
	~String();
};
String::String()
{	len=0;
	p=0;
}
String::String(const char*s)
{	len=strlen(s);
	p=new char[len+1];
	strcpy(p,s);
}
String::String(const String& str)
{	len=str.len;
	p=new char[len+1];
	strcpy(p,str.p);
}
String operator+(const String& s1,const String& s2)
{	String temp;
	temp.len=s1.len+s2.len;
	temp.p=new char[temp.len+1];
	strcpy(temp.p,s1.p);
	strcat(temp.p,s2.p);
	return temp;
}
int operator<=(const String& t1,const String& t2)
{	int m=strlen(t1.p);
	int n=strlen(t2.p);
	if(m<n)
		cout<<t1.p<<" is smaller than "<<t2.p<<endl;
	else if(m>n)
		cout<<t1.p<<" is greater than "<<t2.p<<endl;
	else
		cout<<"Both are of equal length";
}
void show(const String str1){
	cout<<str1.p<<endl;
}
String::~String(){
	delete p;
}
int main(){
	String st1="Kailash";
	String st2="Chandra";
	String st3="Girtola";
	String sr1=st1;
	String sr2=st2;
	String sr3=st1+st2;
	cout<<"\nString1:";
	show(sr1);
	cout<<"\nString2:";
	show(sr2);
	cout<<"\nString3:";
	show(sr3);
	sr1<=sr2;
	cout<<"\n";
	sr3<=sr2;
	return 0;
}
	


