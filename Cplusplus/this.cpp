#include<iostream>
#include<cstring>
using namespace std;
class sales{
	char *name;
	public:
	sales(char *n)
	{	strcpy(name,n);
	}
	void print(){
		cout<<this->name<<"has invoked.";
	}
};
int main(){
	sales s("Kailash"),j("Chandra");
	s.print();
	j.print();
	return 0;
}


