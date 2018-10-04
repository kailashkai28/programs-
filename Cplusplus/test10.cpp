#include<iostream>
using namespace std;
class Complex
{	float x;
	float y;
	public:
	Complex(){}
	Complex(float real,float imag){
		x=real; y=imag;
	}
	friend Complex operator+(Complex,Complex);
	void display();
};
Complex operator+(Complex c,Complex d){
	Complex temp;
	temp.x=c.x+d.x;/* or simply, return Complex(c.x+d.x,c.y+d.y);*/
	temp.y=c.y+d.y;
	return temp;
}
void Complex::display(){
	cout<<x<<"+i"<<y;
}
int main(){
	Complex com;
	cout<<"For Default constructor:";
	com.display();
	float r,i,m,n;
	cout<<"\nEnter real part:";
	cin>>r;
	cout<<"\nEnter imaginary:";
	cin>>i;
	Complex com1(r,i);
	cout<<"\nFor Parameterized1:";
	com1.display();
	cout<<"\nEnter real part:";
	cin>>m;
	cout<<"\nEnter imaginary:";
	cin>>n;
	Complex com2(m,n);
	cout<<"\nFor Parameterized1:";
	com2.display();
	Complex com3;
	com3=com1+com2;//equivalent to, com3=operator+(com1,com2);
	cout<<"\nAddition:";
	com3.display();
	return 0;
}

