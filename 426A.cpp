#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
int n,s,count=0,temp,max_val=INT_MIN;
 cin>>n>>s;
 for(int i=0;i<n;i++)
 {
     cin>>temp;
     count+=temp;
     max_val=max(max_val,temp);
 }
 if(count-max_val<=s)
    cout<<"YES";
else
{
    cout<<"NO";
}
return 0; 
}

