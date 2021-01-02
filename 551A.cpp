#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{   
map<int,int,greater<int>>a;
unordered_map<int,int>refer;
vector<int>val;
int n,b,count=1;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>b;
    a[b]++;
    val.push_back(b);
}
for(auto &i:a)
{
    refer[i.first]=count;
    count+=i.second;
}
for(int i=0;i<n;i++)
{
    cout<<refer[val[i]]<<" ";
}

return 0;
}

