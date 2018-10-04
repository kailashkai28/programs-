#include<iostream>
using namespace std;
const int size=3;
class vector
{	int a[size];
	public:
		vector()
		{	for(int i=0;i<size;i++)
			{	a[i]=0;
			}
		}
		vector(int* b)
		{	for(int i=0;i<size;i++)
			{	a[i]=b[i];
			}
		}
		friend vector operator*(int,vector);
		friend vector operator*(vector,int);
		friend istream& operator>>(istream&,vector&);
		friend ostream& operator<<(ostream&,vector&);
};
vector operator*(int c,vector u){
	vector v;
	for(int i=0;i<size;i++)
	{	v.a[i]=c*u.a[i];
	}
	return v;
}
vector operator*(vector n,int s){
	vector f;
	for(int i=0;i<size;i++)
	{	f.a[i]=n.a[i]*s;
	}
	return f;
}
istream& operator>>(istream& din,vector&g){
	for(int i=0;i<size;i++)
	{	din>>g.a[i];
	}
	return din;
}
ostream& operator<<(ostream& dout,vector&t){
	dout<<"{";
	for(int i=0;i<size;i++)
	{	dout<<t.a[i]<<",";
	}
	dout<<"}";
	return dout;
}

int e[size]={1,2,3};
int main(){

	int j;
	vector h;
	vector h1(e);
	vector h3,h4,h5;
	cout<<"Enter a no.:";
	cin>>j;
	cout<<"\nFirst operator:";
	h3=j*h1;//equivalent to h3=operator*(j,h1);
	cout<<h3;
	cout<<"\nSecond operator:";
	h4=h1*j;//equivalent to h4=operator(h1,j);
	cout<<h4;
	cout<<endl;
	cin>>h5;
	cout<<h5;
	return 0;
}



	
		
