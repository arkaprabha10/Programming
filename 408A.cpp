#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n,ans=INT_MAX,count=0,temp;
    cin>>n;
    vector<int>a(n,0);
    for(int i=0;i<n;i++)
        cin>>a[i];
for(int i=0;i<n;i++)
{   count=0;
    for(int j=0;j<a[i];j++)
    {
        cin>>temp;
        count+=temp;
    }
    count=count*5+a[i]*15;
    ans=min(ans,count);
}
cout<<ans;
return 0; 
}

