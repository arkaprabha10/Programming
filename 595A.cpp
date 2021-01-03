#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
 int n,m,count=0;
 cin>>n>>m;
 vector<int>a(2*m,0);
 for(int i=0;i<n;i++)
 {   a.clear();
     for(int j=0;j<2*m;j++)
        cin>>a[j];
     for(int j=0;j<2*m-1;j+=2)
     {
         if(a[j]==1 || a[j+1]==1)
            count++;
     }
 }
 cout<<count;
return 0;
}

