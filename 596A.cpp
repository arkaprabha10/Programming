#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{ int n,x,y,a1,b1;
  long int ans=0;
  vector<pair<int,int>>a;
  map<int,int>b;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>a1>>b1;
      a.push_back(make_pair(a1,b1));
  }
  if(n==1)
    cout<<-1;
  else
  {
      sort(a.begin(),a.end());
    //   for(int i=0;i<n;i++)
    //     cout<<a[i].first<<" "<<a[i].second<<endl;
      if(n==2)
      {
          if((a[0].first == a[1].first) || (a[0].second == a[1].second))
            ans=-1;
          else
          {
              ans=abs(a[0].first-a[1].first) * abs(a[0].second - a[1].second);
          }
          
      }
      if(n>2)
      { 
        
         for(int i=0;i<n;i++)
         {
           if(b.find(a[i].first)!=b.end())
           {
             y=abs(b[a[i].first] - a[i].second);
             break;
           }
           b[a[i].first]=a[i].second;
         }

         b.clear();

         for(int i=0;i<n;i++)
         {
           if(b.find(a[i].second)!=b.end())
           {
             x=abs(b[a[i].second] - a[i].first);
             break;
           }
           b[a[i].second]=a[i].first;
         }
        ans=x*y;
      }
      cout<<ans;
  } 
    
return 0; 
}

