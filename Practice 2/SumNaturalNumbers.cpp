#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

int natural(int n)
{
    int k;
    for (int i=1; i<=n; i++)
    {
        k=((n*(n+1))/2);
    }
    return k;
}

int main ( )
{
    int n;
    cin>>n;
     
     cout<<natural(n)<<endl;

}