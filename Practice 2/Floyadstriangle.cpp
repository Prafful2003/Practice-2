#include<iostream>
using namespace std;
int main  ( )                                            
{                                  
    int row;                                                   
    cin>>row;                                                  // 1
    int count=1;                                               // 23
    for (int i=1; i<=row; i++)                                 // 456
    {                                                          // 78910
        for (int j=1; j<=i; j++)                               // 111213
        {
          cout<<count;
          count++;
        }
       cout<<endl;
    }
}