#include<iostream>
using namespace std;
int main ( )
{
    int n,x,y=0;
    cin>>n;   //123
   
    while (n>0)
    {
        x=(n%10);
        y=((y*10)+x);
        n=(n/10);
    }

cout<<y<<endl;
}