#include<iostream>
#include "head14.h"
using namespace std;
rational::rational(){
	p=0;
	q=1;
}
rational::rational(float m,float n=1){
	p=m;
	q=n;
}
rational::rational(rational& r){
	p=r.p;
	q=r.q;
}
rational operator+(rational s,rational t){
	rational temp;
	temp.p=s.p*t.q+s.q*t.p;
	temp.q=s.q*t.q;
	return temp;
}

rational operator-(rational s,rational t){
	rational temp;
	temp.p=s.p*t.q-s.q*t.p;
	temp.q=s.q*t.q;
	return temp;
}
rational operator*(rational s,rational t){
	rational temp;
	temp.p=s.p*t.p;
	temp.q=s.q*t.q;
	return temp;
}
rational operator/(rational s,rational t){
	rational temp,temp1;
	temp.p=s.p/s.q;
	temp.q=t.p/t.q;
	temp1=(temp.p)/(temp.q);
	return temp1;
}
void rational::show(){
	cout<<p/q<<endl;
}

