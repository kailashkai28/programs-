#include<iostream>
using namespace std;
class a
{
	protected:
	int c;
	public:

		void getc(){
			cout<<"\nEnter c:";
			cin>>c;
		}
		void showc(){
			cout<<"c:"<<c;
		
		}
		friend void showcc();


};
class b:private a
{	int d;
	public:
		void get(){
			cout<<"\nEnter d:";
			cin>>d;
			getc();
			
		}
		void show(){

			showc();
			cout<<"\td:"<<d;
		}
		friend void showcc(){
			cout<<"c:"<<a::c;
		}


};
int main(){
	b ob;
	ob.get();
	ob.show();

	return 0;
}

