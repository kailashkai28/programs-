#include<iostream>
using namespace std;
class rational
{	float p,q;
	public:
	rational();
	rational(float,float);
	rational(rational&);
	friend rational operator+(rational,rational);
	friend rational operator-(rational,rational);
	friend rational operator*(rational,rational);
	friend rational operator/(rational,rational);

	void show();
};
