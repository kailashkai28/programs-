#include<iostream>
using namespace std;
static int count=0;
class consdest{
	int *p;
	public:
	consdest(){
		count++;
		p=new int[10];
		cout<<"Object "<<count<<" created.";
	}
	~consdest(){
		delete p;
		cout<<"Object "<<count<<" destroyed.";
		count--;
	}
};
int main(){
	consdest c;
	cout<<endl;
	consdest c1;
	cout<<endl;
	consdest c2;
	cout<<endl;
	return 0;
}
