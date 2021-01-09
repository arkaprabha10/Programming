#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
   int n,count=0,info=0,i=INT_MAX,go=1;
   cin>>n;
   vector<int>a(n,0);
   for(int j=0;j<n;j++)
   {
       cin>>a[j];
       if(a[j]==0)
        i=min(i,j);
   } 
    while(n>0)
    {   if(i<0)
        {   count++;
            go=1;
            i=0;
        }    
        if(i>=n)
        {   count++;
            i=n-1;
            go=0;
        }
        if(a[i]<=info)
        {
            info++;
            a.erase(a.begin()+i);
            n--;
            if(go==0)
                i--;
        }
        else if(a[i]>info)
        {
            if(go==1)
                i++;
            else
                i--;
            
        }
    }
   cout<<count;
return 0; 
}

