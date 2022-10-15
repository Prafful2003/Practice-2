#include<iostream>
using namespace std;

void factorial (int n)
{
    int m=1;
    for (int i=n; i>=1; i--)
    {
       m=(m*i);
    }
     cout<<"Factorial of "<<n<<" is "<<m<<endl;
}

int main ( )
{
    int n;
    cin>>n;

    factorial(n);
}