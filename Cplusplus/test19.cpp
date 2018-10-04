//Class type to another class type(method2)
#include<iostream>
using namespace std;
class a
{	int b,c;
	public:
	a(){}
	a(int x,int y){
		b=x;
		c=y;
	}
	void show(){
		cout<<"b="<<b<<"\nc="<<c<<endl;
	}
	int getb(){
		return b;
	}
	int getc(){
		return c;
	}
};
class d
{	int n,m;
	public:
	d(){}
	d(int x,int y){
		n=x;
		m=y;
	}
	void show(){
		cout<<"n="<<n<<"\nm="<<m<<endl;
	}
	d(a ob){
		n=ob.getb();
		m=ob.getc();

	}
	operator a(){
		return a(n,m);
	}

};
int main(){
	a ob1(1,2);
	d ob2(3,4);
	ob2=ob1;
	cout<<"Class a's info:";
	ob1.show();
	cout<<"\nClass d's info:";
	ob2.show();
	return 0;
}

