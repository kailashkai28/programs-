#include<iostream>
using namespace std;
int main(){
	int *var,r,c,*row,*col;
	cout<<"Enter number of rows and columns:";
	cin>>r>>c;
	var=new int[r*c];
	row=new int[r];
	col=new int[c];
	for(int i=0;i<r;i++)
	{	
		cout<<"\nEnter elements of row "<<i+1<<" :";
		row[i]=0;
		for(int j=0;j<c;j++)
		{	cin>>var[i*c+j];
			row[i]+=var[i*c+j];

		}
	}
	for(int j=0;j<c;j++)
	{
		col[j]=0;
		for(int i=0;i<r;i++)
		{	col[j]+=var[i*c+j];
		}
	cout<<"\nSum of row:";
	for(int i=0;i<r;i++)
	{	cout<<row[i];
	}
	cout<<"\nSum of columns:";
	for(int j=0;j<c;j++)
	{	cout<<col[j];
	}
	}
	int sum=0;
	cout<<"\nSum of array is:";
	for(int i=0;i<r;i++)
	{	for(int j=0;j<c;j++)
		{	sum+=var[i*c+j];
		}
	}
	cout<<sum<<endl;
	return 0;
}

