#include<iostream>
#include<math.h>
using namespace std;

void fibonic(int n)
{
    int l,m;
    cin>>l>>m;

    for (int i=1; i<=n; i++)
    {
        int n;
          cout<<l;
        n=(l+m);
        l=m;
        m=n;
      
    }

}

int main ( )
{
    int n;
    cin>>n;

    fibonic(n);
}