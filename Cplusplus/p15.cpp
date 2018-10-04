#include<iostream>
#include "head15.h"
int main()
{
    matrix a,b,c;
    a.set();
    b.set();
    c=a*b;
    a.show();
    b.show();
    c.show();
    return 0;
}
