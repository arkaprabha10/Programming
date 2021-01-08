#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n;
    vector<int>ans;
    cin>>n;
    if(n==1 || n==2)
        cout<<-1;
    else
    {
        ans.push_back(n-1);
        ans.push_back(n);
        for(int i=1 ;i<n-1;i++)
            ans.push_back(i);
        for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
    }
    
return 0; 
}

