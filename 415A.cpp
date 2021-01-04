#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n,m,temp,min_ind;
    cin>>n>>m;
    vector<int>ans(n,0);
    cin>>temp;
    for(int i=temp-1;i<n;i++)
        ans[i]=temp;
    min_ind=temp-2;
    for(int i=1;i<m;i++)
    {   
        cin>>temp;
        if(temp-1<=min_ind)
        {
            for(int j=temp-1;j<=min_ind;j++)
            ans[j]=temp;
            min_ind=min(min_ind,temp-2);   
         }
        
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
return 0; 
}

