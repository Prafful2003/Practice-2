#include<iostream>
#include<math.h>
using namespace std ;

void factorial(int n)
{
   int facto=1;;

   for (int i=n; i>=1; i--)
   {
    facto=(facto*i);
   }
   cout<<facto<<endl;
}

int main ( )
{
    int n;
    cin>>n;

    factorial(n);
}