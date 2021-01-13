#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{ 
  vector<string>a;
  string temp;
  int min_val=INT_MAX,min_val1=INT_MAX;
  for(int i=0;i<8;i++)
  {
    cin>>temp;
    a.push_back(temp);
  }

  for(int j=0;j<8;j++)
  { int check=0,check1=0;
    int i=0,k=0;
    for(i=7;i>=0;i--)
    {
      if(a[i][j]=='W')
      {
        check=1;
        break;
      }
      if(a[i][j]=='B')
        break;
    }
    if(check==0 &&  (7-i >=0))
    {
      min_val=min(7-i,min_val);
    }
    
    for(k=0;k<8;k++)
    {

      if(a[k][j]=='B')
      {
        check1=1;
      }
      if(a[k][j]=='W')
        break;
    }
    if(check1==0 && k<8)
    {
      min_val1=min(k,min_val1);
    }
    
  }
  // cout<<min_val1<<" "<<min_val<<endl;
  if(min_val1<=min_val)
    cout<<"A";
  else
  {
      cout<<"B";
  }
  
  return 0; 
}

