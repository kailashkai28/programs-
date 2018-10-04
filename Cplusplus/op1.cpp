#include<iostream>
using namespace std;
class oper{
	int a,b;
	public:
	oper();

	void getdata(int,int);

	void operator-();

	void display();

};
oper::oper(){
		a=0;
		b=0;
	}
void oper::getdata(int x,int y){
		a=x;
		b=y;
	}
void oper::operator-(){
		a=-a;
		b=-b;
	}
void oper::display(){
		cout<<"a="<<a<<"\nb="<<b<<endl;
	}
int main(){
	oper m;
	m.getdata(2,3);
	m.display();
	-m;
	m.display();
	return 0;
}
