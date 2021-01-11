#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;



int main()
{ 
  map<int,int>a;
  int n,temp,half=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>temp;
    a[temp]++;
  }
  for(auto &i:a)
  {
    half+=i.second/2;
  }
  cout<<half/2;
  return 0; 
}

