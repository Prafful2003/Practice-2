#include<iostream>
#include<math.h>
using namespace std;

void nCr1 (int n,int r)
{
    int m=1;
    for (int i=n; i>=1; i--)
    {
       m=(m*i);
    }

   int l=1;
   for (int j=r; j>=1; j--)
   {
    l=(l*j);
   }  

   int k,y=1;
   k=(n-r);
   for (int p=k; p>=1; p--)
   {
     y=(y*p);
   }

   l=(l*y);
   m=(m/l);
   cout<<"Answer of  "<<n<<"C"<<r<<"  is "<<m<<endl;
}

int main ( )
{
    int n,r;
    cin>>n>>r;
   
  
   nCr1(n,r);
}