#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main()
{ int n,k;
  cin>>n>>k;
  vector<int>a(n,k/n);
  vector<vector<int>>ans;
  if(k%n!=0)
    a[a.size()-1]+=k%n;

  for(int i=0;i<n;i++)
  { 
    ans.push_back(a);
    int val = a[0];
    a.erase(a.begin());
    a.push_back(val);
    for(int j=0;j<n;j++)
      cout<<ans[i][j]<<" ";
    cout<<endl;
  }

return 0;  
}
