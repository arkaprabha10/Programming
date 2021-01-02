#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
 int n,ans=0,temp1,temp2,x,y,temp3;
 string a,b;
 cin>>n>>a>>b;
 
 for(int i=0;i<n;i++) 
 {   x=int(a[i])-48;
     y=int(b[i])-48;
     temp1=abs(x-y);
     temp2=10-max(x,y)+min(x,y);
    ans+=min(min(temp1,temp2),temp3);
    
 }   
 cout<<ans;
return 0;
}

