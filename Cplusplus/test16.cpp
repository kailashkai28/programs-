//Primitive type(base type) to class type.
#include<iostream>
using namespace std;
class Complex
{	int a,b;
	public:
	Complex(){	}
	Complex(int x){
		a=x; b=0;
	}

	void getdata(int x){
		a=x; b=0;
	}
	void show(){
		cout<<a<<"+i"<<b<<endl;
	}
};
int main(){
	Complex c;
	int i=6;
	c=i;
	c.getdata(i);
	c.show();
	return 0;
}

