#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main()
{ 
  int n;
  cin>>n;
  for(int i=0;i<=n;i++)
  { for(int l=0;l<n-i;l++)
      cout<<"  ";
    for(int j=0;j<=i;j++)
    { if(j!=i)
        cout<<j<<" ";
      else
        cout<<j;
    }
    for(int k=i-1;k>=0;k--)
    {
        cout<<" "<<k;
    }
      
    cout<<endl;
  }
  for(int i=n-1;i>=0;i--)
  { for(int l=0;l<n-i;l++)
      cout<<"  ";
    for(int j=0;j<=i;j++)
    { if(j!=i)
        cout<<j<<" ";
      else
        cout<<j;
    }
    for(int k=i-1;k>=0;k--)
    {
        cout<<" "<<k;
    }
    cout<<endl;
  }
  return 0;  
}
