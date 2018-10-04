#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int c;
	cout<<"Enter a number:";
	cin>>c;
	cout<<"\nDecimal format:";
	cout.width(12);
	cout.setf(ios::dec,ios::basefield);
	cout<<c;
	cout<<"\nOctal format:";
	cout.width(12);
	cout.setf(ios::oct,ios::basefield);
	cout<<c;
	cout<<"\nHexaDecimal format:";
	cout.width(12);
	cout.setf(ios::hex,ios::basefield);
	cout<<c;
	return 0;
}
	

