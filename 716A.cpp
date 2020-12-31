#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,c,count=1;
    cin>>n>>c;
    vector<int>a(n,0);
    
    cin>>a[0];
    for(long long int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]-a[i-1]<=c)
            count++;
        else
            count=1;
    }
    cout<<count;

    return 0;
}