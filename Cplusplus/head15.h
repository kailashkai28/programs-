#include<iostream>
using namespace std;
class matrix
{	public:
	int a[3][3];
	matrix();
	void set();
	void show();
	matrix operator*(matrix);
};

