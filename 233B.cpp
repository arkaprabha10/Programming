#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int sum(long long int a)
{
  int sum=0;
  while(a>0)
  {
    sum+=a%10;
    a/=10;
  }
  return sum;
}

int main()
{ 
   long long int ans=INT_MAX;
   long long int n;
   cin>>n;
    for(long long int i=0;i<=91;i++)
    {
        if(!i) continue;
        long long int k = i*i;
        k+= 4*n;
        long long int d= sqrt(k);
        long long int ds=d;
        ds=ds-i;
        if(d*d==k  && ds%2==0) {
            //cout<<i<<" "<<ds<<" ";
            long long int s=0;
            long long int j=ds/2;
            while(j){
                long long int r=j%10;
                s+=r;
                j=j/10;
            }
        //    cout<<ds/2<<" "<<s<<" ";
            if(s==i)
            ans=min(ans,ds/2);
        }
    }
    if(ans==INT_MAX)
      cout<<-1;
    else
      cout<<ans;
  return 0; 
}

