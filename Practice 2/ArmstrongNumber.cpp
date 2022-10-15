#include<iostream>
#include<math.h>
using namespace std;
int main ( )
{
    int n,sum=0;
    cin>>n;

    int check;
    check=n;
    while (n>0)
    {
       int first;
       first=n%10;
        sum+=pow(first,3);
        n=n/10;

    }

    if (check==sum)
    {
        cout<<"Armstrong"<<endl;
    }
    else {
        cout<<"Not Armstrong"<<endl;
    }
    return 0;
}