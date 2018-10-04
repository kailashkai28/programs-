#include<iostream>
#include "head14.h"
using namespace std;
int main(){
	float f,g,l,k;
	rational rat;
	rat.show();
	cout<<"\nEnter two numbers:";
	cin>>f>>g;
	if(g==0)
	{	cout<<"Error:Denominator should not be zero.";
		exit(0);
	}
	rational rat1(f,g);
	cout<<"\nFirst p/q=";
	rat1.show();
	rational rat2=rat1;
	cout<<"\nEnter two numbers again:";
	cin>>l>>k;
	if(k==0)
	{	cout<<"Error:Denominator should not be zero.";
		exit(0);
	
	}
	rational rat3(l,k);
	cout<<"\nSecond p/q=";
	rat3.show();
	rational rat4;
	rat4=rat1+rat3;
	cout<<"Sum is:";
	rat4.show();
	rational rat5,rat6,rat7;
	rat5=rat1-rat3;
	cout<<"\nMinus:";
	rat5.show();
	rat6=rat1*rat3;
	cout<<"\nMultiply:";
	rat6.show();
	rat7=rat1/rat3;
	cout<<"\nDivision:";
	rat7.show();
	return 0;
}
	


