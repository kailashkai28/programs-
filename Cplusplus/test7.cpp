#include<iostream>
using namespace std;
int count=0;
class consdest{

	public:
	consdest(){
		count++;
		cout<<"Object is created "<<count<<" times."<<endl;
	}
	~consdest(){
		cout<<"Destroyed "<<count<<" object(s)."<<endl;	
		count--;
	}

};
int main(){
	consdest c;
	consdest c1;
	return 0;
}

