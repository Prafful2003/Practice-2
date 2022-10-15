#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while (t--)
	{
	    cin>>n;
	    int a[n];
	    for (int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    cin>>k;
	    int b[k];
        for (int j=0; j<k; j++)
	    {
	        cin>>b[j];
	    }
	    for (int j=0; j<k; j++)
	    {
	        for (int i=0; i<n; i++)
	        {
	            if (b[j]==a[i])
	            {
	                a[i]=0;
	            }
	        }
	    }
	    for (int i=0; i<n; i++)
	    {
	        if (a[i]!=0)
	        {
	        cout<<a[i];
	        }
	        else {
	            continue;
	        } 
	    }
	    cout<<endl;
	}
	return 0;
}
