#include<iostream>
using namespace std;
class num
{	int a,b;
	public:
		num(){}
		num(int x,int y){
			a=x;
			b=y;
		}
		friend num operator+(int,num);
	       	void display();
};
num operator+(int u,num t){
	return num(u,t.a+t.b);
}
void num::display(){
	cout<<"Sum:"<<a+b<<endl;
}
int main(){
	num n;
	n.display();
	num n1(2,2);
	n1.display();
	num n2;
	n2=3+n1;
	n2.display();
	return 0;
}
