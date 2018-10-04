#include<iostream>
#include<cstring>
using namespace std;
class String{
	char *name;
	int len;
	public:
	String(){
		len=0;
		name=new char[len+1];
	}
	String(char*s){
		len=strlen(s);
		name=new char[len+1];
		strcpy(name,s);
	}
	void display(){
		cout<<"String is:"<<name<<endl;
	}
	void join(String&,String&);
};
void String::join(String &a,String &b){
	len=a.len+b.len;
	delete name;
	name=new char[len+1];
	strcpy(name,a.name);
	strcat(name,b.name);
}
int main(){
	String str;
	cout<<"\nDefault constructor result:";
	str.display();
	String str1("Kailash");
	String str2(" Chandra");
	cout<<"\nParameterized constructor result:";
	str1.display();
	String str3;
	cout<<"\nJoin function result:";
	str3.join(str1,str2);
	str3.display();
	return 0;
}
