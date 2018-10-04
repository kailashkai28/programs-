#include<iostream>
using namespace std;
class book{
	string author;
	string title;
	float price;
	string publisher;
	int stock;
	char ch;
	public:
	book(){
		author="NULL";
		title="NULL";
		price=0.0;
		publisher="NULL";
		stock=0;	
	}
	void get();
	void purchase(int);
	void display();
};
void book::get(){
	cout<<"Enter author name:";
	cin>>author;
	cout<<"\nEnter title:";
	cin>>title;
	cout<<"\nPrice:";
	cin>>price;
	cout<<"\nPublisher:";
	cin>>publisher;
	cout<<"\nStock:";
	cin>>stock;
	purchase(stock);
}
void book::purchase(int count){
	cout<<"Wanna purchase any of the books??";
	cin>>ch;
	if(ch=='y'||ch=='Y')
	{	count--;
		cout<<"Stock is:"<<count;
	}
	else if(ch=='n'||ch=='N')
		cout<<"Stock is:"<<count;
	else 
		cout<<"Wrong input....";
	
}
void book::display(){
	cout<<"\nDetails:";
	cout<<"\nAuthor:"<<author<<"\nTitle:"<<title<<"\nPrice:"<<price<<"\Publisher:"<<publisher<<"\nStock:"<<stock<<endl;
}
int main(){
	char c;
	book ob;
	ob.get();
	ob.display();
	return 0;
}

