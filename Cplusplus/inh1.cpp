#include<iostream>
using namespace std;
class a
{	protected:
	int c;
	public:
		void get(){
			cout<<"\nEnter c:";
			cin>>c;
		}
		void show(){
			cout<<"c:"<<c;
		}
};
class b:public a
{	int d;
	public:
		void get(){
			cout<<"\nEnter d:";
			cin>>d;
		}
		void show(){
			cout<<"\nc:"<<c<<"\td:"<<d;
		}
};
int main(){
	b ob;
	ob.a::get();
	ob.get();
	ob.show();
	return 0;
}

