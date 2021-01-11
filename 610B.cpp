#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{ 
  long long int n,temp,count=INT_MIN,ans=0,min=0;
  cin>>n;
  vector<long long int>a(n,0),ind;
  ind.push_back(0);
  for(long int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[min]==a[i])
    {
      ind.push_back(i);
    }
    if(a[min]>a[i])
    {
      ind.clear();
      ind.push_back(i);
      min=i;
    }
  }
  ans+=a[min]*n;
  for(long long int i=0;i<ind.size()-1;i++)
  {
      count=max(count,ind[i+1]-ind[i]-1);
  }
  count=max(count,n-1-ind[ind.size()-1]+ind[0]);
  cout<<ans+count;
  return 0; 
}

