#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

long int func(string &a, string &b)
{ long int count =0,check=0;

  for(int i=0;i<a.size();i++)
  { check=0;
    if(a[i]==b[0])
    { 
      for(int j=0;j<b.size();j++)
      {
        if(a[i+j]!=b[j])
        {
          check=1;
          break;
        }
      }
      if(check==0)
      {
        count++;
        a[i+b.size()-1] = '#';
      }  
    }
  }
  return count;
}

int main()
{ 
  string a,b;
  cin>>a>>b;
  long int ans=func(a,b);
  cout<<ans;
  return 0; 
}

