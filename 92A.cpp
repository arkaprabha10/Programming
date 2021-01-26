#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main()
{ 
  long int a,b,val;
  cin>>a>>b;
  val=b % (a*(a+1)/2);
  for(int i=1;i<=a;i++)
  {
    if(i*(i+1)/2 > val)
    {
      cout<<val-(i-1)*(i)/2;
      return 0;
    }
    
  }
  // cout<<val;
  return 0;  
}
