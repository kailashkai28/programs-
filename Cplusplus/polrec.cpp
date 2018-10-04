#include<iostream>
#include<cmath>
using namespace std;
class rectangle
{	
	public:
		float x,y;
		rectangle(){}
		rectangle(float s,float t){
			x=s;
			y=t;
		}
		
		void show(){
			cout<<"x="<<x<<"\ny="<<y<<endl;
		}
		float getx(){
			return x;
		}
		float gety(){
			return y;
		}

};
class polar
{	float r,theta;
	public:
		polar(){}
		polar(float a,float b){
			r=a;
			theta=b;
		}
		void show(){
			cout<<"r="<<r<<"\ntheta="<<theta<<endl;
		}
		operator rectangle(){
			rectangle r2;
			polar p;
			r2.x=r*cos(theta);
			r2.y=r*sin(theta);
			return r2;
		}
};

int main(){
	float d,e;
	cout<<"Enter polar coordinates:";
	cin>>d>>e;
	polar p2(d,e);
	rectangle r1;
	r1=p2;
	p2.show();
	r1.show();
	return 0;
}
