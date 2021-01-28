#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int s,n,temp1,temp2;
  cin>>s>>n;
  vector<pair<int,int>>x;
  for(int i=0;i<n;i++)
  {
    cin>>temp1>>temp2;
    x.push_back(make_pair(temp1,temp2));
  }
  sort(x.begin(),x.end());
  for(int i=0;i<n;i++)
  {
    if(s>+x[i].first)
      s+=x[i].second;
    else
    {
      cout<<"NO";
      return 0;
    }
  }
  cout<<"YES";
  return 0;
}