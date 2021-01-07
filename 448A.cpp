#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int sum1=0,sum2=0,temp,ans=0,n;
    for(int i=0;i<3;i++)
    {
        cin>>temp;
        sum1+=temp;
    }    
    ans+=sum1/5;
    if(sum1%5!=0)
        ans++;
    
    for(int i=0;i<3;i++)
    {
        cin>>temp;
        sum2+=temp;
    }
    cin>>n;
    ans+=sum2/10;
    if(sum2%10!=0)
        ans++;
    
    if(ans<=n)
        cout<<"YES";
    else if(ans>n)
    {
        cout<<"NO";
    }
    //cout<<endl<<sum1<<" "<<sum2<<" "<<ans;
return 0; 
}

