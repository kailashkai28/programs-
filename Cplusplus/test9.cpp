#include<iostream>
using namespace std;
class Complex
{	float x;
	float y;
	public:
	Complex(){}
	Complex(float real,float imag){
		x=real;
		y=imag;
	}
	Complex operator+(Complex);
	void display();
};
Complex Complex::operator+(Complex c){
					/*Complex temp;
					  temp.x=x+c.x;
					  temp.y=y+c.y;
					  return temp;
					 */ 
	return Complex(x+c.x,y+c.y);
}
void Complex::display(){
	cout<<endl<<x<<"+i"<<y<<endl;
}
int main(){
	Complex com;
	cout<<"Default value:";
	com.display();
	float r,i,m,n;
	cout<<"\nEnter real part:";
	cin>>r;
	cout<<"\nEnter imaginary part:";
	cin>>i;
	cout<<"\nParameterized:";
	Complex com1(r,i);
	com1.display();
	cout<<"\nEnter again::";
	cout<<"\nEnter real part:";
	cin>>m;
	cout<<"\nEnter imaginary part:";
	cin>>n;
	cout<<"\nSecond parameterized:";
	Complex com2(m,n);
	com2.display();
	Complex com3;
	com3=com1+com2;//com3=com1.operator+(com2);
	cout<<"\nSum is:";
	com3.display();
	return 0;
}
		

