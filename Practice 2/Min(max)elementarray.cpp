#include<iostream>
using namespace std;
int main ( )
{
    int n,min,max;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for (int i=0; i<n; i++)
    {
        if (a[0]>a[i+1])
        {
            a[0]=a[i+1];
            min=a[0];
        }
    }
    cout<<"min ="<<min<<endl;
    for (int i=0; i<n; i++)
    {
        if (a[0]<a[i+1])
        {
            a[0]=a[i+1];
            max=a[0];
        }
    }
        cout<<"max ="<<max<<endl;
}
