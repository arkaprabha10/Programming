#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main()
{ 
   long int n,k,temp,i=0,count=0;
   string a;
   vector<long int >ind1,ind2;
   cin>>n>>k>>a;
   for(i=0;i<n;i++)
   {
     if(a[i]=='a')
      ind1.push_back(i);
    else
    {
      ind2.push_back(i);
    }
   }
   if(k>=ind1.size() || k>=ind2.size())
   {
     cout<<n;
     return 0;
   }
   count=ind1[k];
   for(i=1;i<ind1.size()-k;i++)
   {  
     count=max(count,ind1[i+k]-ind1[i-1]-1);
   }
   count=max(count,n-1-ind1[ind1.size()-1-k]);
   count=max(count,ind2[k]);
   for(i=1;i<ind2.size()-k;i++)
   {  
     count=max(count,ind2[i+k]-ind2[i-1]-1);
   }
   count=max(count,n-1-ind2[ind2.size()-1-k]);
   cout<<count;
     return 0; 
}
