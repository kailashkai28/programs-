#include<iostream>
#include<cstring>
using namespace std;
class String
{	char *str;
	int len;
	public:
	String(){
		len=0;
		str=new char[len+1];
	}
	String(char *s){
		len=strlen(s);
		str=new char[len+1];
		strcpy(str,s);
	}
	String(String& st){
	       len=st.len;
       	       str=new char[len+1];
	       strcpy(str,st.str);
	}
	friend int operator<=(const String&,const String&);
	String operator+=(const String&);
	friend istream& operator>>(istream&,String&);
	friend ostream& operator<<(ostream&,String&);	
	void insert(int,char*);
	void erase(int,int);
	void show();
	~String(){
		delete str;
	}
};
int operator<=(const String& a,const String& b){
	int alen=strlen(a.str);
	int blen=strlen(b.str);
	if(alen<=blen)
		return 1;
	else
		return 0;
}
String String::operator+=(const String& c)
{	String temp;
	temp.len=len+c.len;
	strcpy(temp.str,c.str);
	return temp;
}
istream& operator>>(istream& din,String& d){
	din>>d.str;
	return din;
}
ostream& operator<<(ostream& dout,String& e){
	dout<<e.str;
	return dout;
}
void String::insert(int n,char*s1){

	string strr;
	strr.insert(n,s1);
}
void String::erase(int n,int m){
	string strr;
	strr.erase(n,m);
}
void String::show(){
	cout<<"String is:"<<str;
}

int main(){
	char sr[30];
	cout<<"Enter a string:";
	cin.getline(sr,30);
	String str1;
	String str2(sr);
	String str3(str2);
	String str4;
	if(str2<=str3)
	{	str2.show();
		cout<<" is Smaller than ";
		str3.show();
	}
	else
		cout<<"First string is greatest";

	str4=str2.operator+=(str3);
	str4.show();
	str2.show();
	String str5;
	cin>>str5;
	cout<<str5;
	int f;
	cout<<"\nEnter a number:";
	cin>>f;
	str3.insert(f,sr);
	int start,end;
	cout<<"\nEnter start and end:";
	cin>>start>>end;
	str3.erase(start,end);
	str3.show();
	return 0;
}	
		


