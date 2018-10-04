#include<iostream>
using namespace std;
int main(){
	string str="Kailash is ";
	str.insert(11,"Chutiya");
	cout<<str;
	char ch;
	cout<<"\nWanna erase Chutiya...if yes..press y otherwise press n:";
	cin>>ch;
	if(ch=='y')
	{	str.erase(str.begin()+10,str.end());
		cout<<"\nString is:"<<str<<endl;
	}
	else{
		cout<<str;
	}
		return 0;
}
