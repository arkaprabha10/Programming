#include<iostream>
#include<string>
#include<cmath>
#include<unordered_map>
#include<unordered_set>
#include<bits/stdc++.h>
 
using namespace std;

int main()
{    
    int n,temp;
    set<int>a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.insert(temp);
    }
    int count=1;
    for(auto&i:a)
    {
        if(i==count)
        {
            
            count++;
        }
        else
        {
            cout<<count;
            return 0;
        } 
        
    }
    cout<<count;
      
}