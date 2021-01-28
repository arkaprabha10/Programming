#include<iostream>
#include<string>
#include<cmath>
#include<unordered_map>
#include<unordered_set>
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{   long long int n,m,x,pos=1,ans=0;
    cin>>n>>m;
    vector<long long int>a(m,0);
    for(long long int i=0;i<m;i++)
        cin>>a[i];
    long long int time=a[0]-1;
    // while(m--)
    // {
    //     cin>>x;
    //     ans += (x - pos<0?x-pos+n:x-pos);
    //     pos = x;
    // }
    for(long long int i=1;i<m;i++)
    {
        if(a[i]<a[i-1])
        {
            time=time+n-a[i-1]+a[i];
        }
        else
            time=time+a[i]-a[i-1];
    }  
    cout<<time;
    // cout<<ans;  
    return 0;  
}