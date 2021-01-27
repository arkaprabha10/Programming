#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main()
{ 
  int n,m,sum=0;
  cin>>n>>m;
  vector<int>ans(n,0);
  for(int i=0;i<n;i++)
    cin>>ans[i];
  sort(ans.begin(),ans.end());
  int j=0;
  while(j<m)
  {
    if(ans[j]>=0)
      break;
    sum+=ans[j];
    j++;
  }
  cout<<-1*sum;
  return 0;  
}
