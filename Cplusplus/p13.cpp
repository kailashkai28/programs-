#include<iostream>
#include<cmath>
using namespace std;
class rectangle//source class
{
	float x,y;
	public:
	float getx()
	{
	return x;
	}
	float gety()
	{
	return y;
	}
	friend istream & operator >>(istream& din,rectangle& r1)
	{
	cout<<"\nEnter the rectangular components:";
	din>>r1.x>>r1.y;
	return din;
	}
};
class polar//destination class
{
	float r,theta;
	public:
	polar(float a,float b)
	{
	r=a;
	theta=b;
	}
	friend ostream& operator <<(ostream &dout, polar &p)
	{
	dout<<"Polar components:";
	dout<<p.r<<endl<<p.theta<<endl;
	return dout;
	}
	polar(rectangle e)
	{
	r=e.getx()*cos(e.gety());
	theta=e.getx()*sin(e.gety());
 	}
};
int main()
{
	rectangle r;
	cin>>r;
	polar p=r;
	cout<<p;
	return 0;
}
