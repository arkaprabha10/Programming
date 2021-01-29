#include<iostream>
#include<string>
#include<cmath>
#include<unordered_map>
#include<unordered_set>
#include<bits/stdc++.h>
 
using namespace std;

int main()
{    int n;
    string s;
    map<string,int>a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        a[s]++;
    }
    if(a.size()==1)
        cout<<a.begin()->first;
    else
    {
        if(a.begin()->second > (++a.begin())->second)
            cout<<a.begin()->first;
        else
        {
            cout<<(++a.begin())->first;
        }
        
    }

    return 0;  
}