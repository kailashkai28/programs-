#include<iostream>
#include "head15.h"
using namespace std;
matrix::matrix()
{
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
              a[i][j]=0;
          }
      }
}
void matrix::set()
{
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
              cout<<"\n Enter "<<i<<","<<j<<" element=";
              cin>>a[i][j];
          }
      }
}
void matrix::show()
{
      cout<<"\n Matrix is=\n";
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
               cout<<a[i][j]<<",";
          }
          cout<<"\n";
      }
}
matrix matrix::operator*(matrix x)
{
      matrix c;
      for(int i=0;i<3;i++)
      {
          for(int j=0;j<3;j++)
          {
              c.a[i][j]=0;
              for(int k=0;k<3;k++)
              {
                  c.a[i][j]=c.a[i][j]+a[i][k]*x.a[k][j];
              }
          }
      }
      return(c);
}

