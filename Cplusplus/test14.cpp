#include<iostream>
using namespace std;
class Float
{	float f;
	public:
		Float(){
			f=0.0;
		}
		Float(float);
		Float(Float&);
		friend Float operator+(Float,Float);
		friend Float operator-(Float,Float);
		friend Float operator*(Float,Float);
		friend Float operator/(Float,Float);
		void show();
};
Float::Float(float a){
	f=a;
}
Float::Float(Float& c){
	f=c.f;
}
Float operator+(Float g,Float h)
{	Float temp;
	temp.f=g.f+h.f;
	return temp;
}
Float operator-(Float s,Float t)
{	Float temp;
	temp.f=s.f-t.f;
	return temp;
}

Float operator*(Float u,Float v)
{	Float temp;
	temp.f=u.f*v.f;
	return temp;
}

Float operator/(Float w,Float x)
{	Float temp;
	temp.f=w.f/x.f;
	return temp;
}
void Float::show(){
	cout<<f<<endl;
}
int main(){
	Float f1;
	f1.show();
	cout<<endl;	
	Float f2(2.5);
       	f2.show();
	cout<<endl;
	Float f3=f2;
	Float f4(3);
	f4.show();
	Float f5,f6,f7,f8;
	f5=f3+f4;
	cout<<"\nAddition:";
	f5.show();
	f6=f4-f3;
	cout<<"\nSubtraction:";
	f6.show();
	f7=f3*f4;
	cout<<"\nMultiplication:";
	f7.show();
	f8=f3/f4;
	cout<<"\nDivision:";
	f8.show();
	return 0;
}

	
