#include<iostream>
using namespace std;
class operf{
	int a,b;
	public:
	operf();
	void getdata(int ,int);
	friend void operator-(operf&);
	void show();
};
operf::operf(){
	a=0; b=0;
}
void operf::getdata(int x,int y){
	a=x;
	b=y;
}
void operator-(operf& f){
	f.a=-f.a;
	f.b=-f.b;
}
void operf::show(){
	cout<<"a="<<a<<"\nb="<<b<<endl;
}
int main(){
	operf o;
	o.getdata(1,2);
	cout<<"Including friend function:";
	-o;
	o.show();
	cout<<"Normal call:";
	o.getdata(1,2);
	o.show();
	return 0;
}
	
