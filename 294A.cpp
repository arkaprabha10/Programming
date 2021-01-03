#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
 int n,m,x,y;
 cin>>n;
 vector<int>b(n,0);
 for(int i=0;i<n;i++)
    cin>>b[i];
 cin>>m;
 for(int i=0;i<m;i++)
 {
     cin>>x>>y;
     if(n==1)
     {
         b[0]=0;
     }
     else if(x==1)
     {
        b[1]+=b[0]-y;
        b[0]=0;
     }
     else if(x==n)
     {
         b[n-2]+=y-1;
         b[n-1]=0;
     }
     else
     {
         b[x-2]+=y-1;
         b[x]+=b[x-1]-y;
         b[x-1]=0;
     }  
 }

 for(int i=0;i<n;i++)
    cout<<b[i]<<endl;

return 0;
}

