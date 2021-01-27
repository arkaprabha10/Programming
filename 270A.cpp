#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void func(float a)
{
  float angle = 60.0;
  int n=3;
  while(angle<=a)
  { 
    // cout<<angle<<" ";
    if(angle==a)
    {
      cout<<"YES"<<endl;
      return;
    }
    n++;
    angle=(float)180-(float)360/n;
  }
  cout<<"NO"<<endl;
  return ;

}
int main()
{ 
  int t;
  cin>>t;
  vector<float>a(t,0);
  for(int i=0;i<t;i++)
    cin>>a[i];
  for(int i=0;i<t;i++)
    func(a[i]);

  return 0;  
}
