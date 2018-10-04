//Class type to primitive type(base type)
#include<iostream>
using namespace std;
class Complex{
	int a,b;
	public:
	void getdata(int x,int y){
		a=x;
		b=y;
	}
	void show(){
		cout<<a<<"+i"<<b<<endl;
	}
	operator int(){
		return a;
	}
};
int main(){
	Complex c;
	int i;
	c.getdata(2,4);
	i=c;
	cout<<"i="<<i;
	return 0;
}
