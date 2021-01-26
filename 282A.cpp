#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main()
{ 
  int n,count1=0,count2=0,x=0;
  string a,b,temp="";
  cin>>n;
  for(int i=0;i<n;i++)
  { a="",b="";
    cin>>temp;
    for(int j=0;j<temp.size();j++)
    {
      if(temp[j]=='+')
        a+=temp[j];
       else if(temp[j]=='-')
        b+=temp[j]; 
    }
    // cout<<a<<" "<<b<<endl;
    if(a.size()==2)
      x++;
     else if(b.size()==2)
      x--;
  }
  cout<<x;
}
