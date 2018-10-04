#include<iostream>
using namespace std;
class matrix{
	int **p;
	int d1,d2;
	public:
	matrix(int,int);
	void getelement(int i,int j,int value){
		p[i][j]=value;
	}
	int &putelement(int i,int j){
		return p[i][j];
	}
};
matrix::matrix(int x,int y){
	d1=x;
	d2=y;
	p=new int*[d1];
	for(int i=0;i<d1;i++)
	{	p[i]=new int[d2];
	}
}
int main(){
	int r,c,val;
	cout<<"Enter no. of rows and columns:";
	cin>>r>>c;
	matrix m(r,c);
	cout<<"\nEnter elements:";
	for(int i=0;i<r;i++)
	{	for(int j=0;j<c;j++)
		{	cin>>val;
			m.getelement(i,j,val);

		}
	}
	cout<<"\nElements are:"<<endl;
	for(int i=0;i<r;i++)
	{	for(int j=0;j<c;j++)
		{	cout<<"\tp["<<i<<"]["<<j<<"]:";
			cout<<m.putelement(i,j)<<endl;
		}
	}
	return 0;
}
