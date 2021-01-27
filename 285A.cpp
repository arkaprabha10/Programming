#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main()
{ 
  long int n,k,counter,j=0;
  cin>>n>>k;
  long int temp=n;
  while(temp>n-k)
  {
    cout<<temp<<" ";
    temp--;
  }
  temp=1;
  while(temp<=n-k)
  {
    cout<<temp<<" ";
    temp++;
  }
  return 0;  
}
