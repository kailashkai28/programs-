#include<iostream>
using namespace std;
int main(){
	char ch;
	int count=0;
	cout<<"Enter some text....";
	cin.get(ch);
	while(ch!='\n')
	{	cout.put(ch);
		count++;
		cin.get(ch);
	}
	cout<<"\nNo. of characters:"<<count;
	return 0;
}
