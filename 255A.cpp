#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n,s1=0,s2=0,s3=0,ans,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(i%3 == 0)
            s1+=temp;
        if(i%3 == 1)
            s2+=temp;
        if(i%3 == 2)
            s3+=temp;
    }
    ans=max(max(s1,s2),s3);
    if(ans==s1)
        cout<<"chest";
    if(ans==s2)
        cout<<"biceps";
    if(ans==s3)
        cout<<"back";
return 0; 
}

