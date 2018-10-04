//One Class type to another class type.
#include<iostream>
using namespace std;
class a
{	int b,c;
	public:
	void getdata(int x,int y){
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
	void getdata(int x,int y){
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

};
int main(){
	a ob1;
	d ob2;
	ob1.getdata(1,2);
	ob2.getdata(3,4);
	ob2=ob1;
	cout<<"Class a's info:";
	ob1.show();
	cout<<"\nClass d's info:";
	ob2.show();
	return 0;
}
