#include <iostream>
#include<math.h>
using namespace std;
void check(int a,int x,int b,int y)
{
  if (a>b && x>y)
  {
      x=(x/2);
      a=(a/2);
      if (a==b && x==y)
      {
          cout<<"Equal"<<endl;
      }
  }
  else {
      y=(y/2);
      b=(b/2);
      if (a==b && x==y)
      {
          cout<<"Equal"<<endl;
      }
  }
}

void check2(int a,int x,int b,int y)
{
    if (a==b)
    {
    if (x<y)
    {
        cout<<"Alice"<<endl;
    }
    else {
        cout<<"Bob"<<endl;
    }
    }
    else if (a>b)
    {
        if (x<y)
        {
              cout<<"Alice"<<endl;
        }
        else if (x==y)
        {
            cout<<"Alice"<<endl;
        }
    }
    else {
        if (y<x)
        {
             cout<<"Bob"<<endl;
        }
    }
}
int main() {
	// your code goes here
	int t,a,x,b,y;
	cin>>t;
	while (t--)
	{
	    cin>>a>>x>>b>>y;
	    check(a,x,b,y);
	    check2(a,x,b,y);
	    
	}
	return 0;
}
