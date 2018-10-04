#include<iostream>
#include<cstring>
using namespace std;
class String{
	char *a;
	int len;
	public:
	String();
	String(char*);

	String(String&);

	void display();
};
String::String(){
		len=0;
		a=new char[len+1];
}
String::String(char *s){

		len=strlen(s);
		a=new char[len+1];
		strcpy(a,s);
	}
void String::display(){
	cout<<a<<endl;
}
int main(){
	char *d="Hello,kailash";
	String s4;
	s4.display();
	String s2(d);
	s2.display();
	String s3(s2);
	s3.display();



	return 0;
}
