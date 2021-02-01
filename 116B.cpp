#include<iostream>
#include<string>
#include<cmath>
#include<unordered_map>
#include<unordered_set>
#include<bits/stdc++.h>
 
using namespace std;

bool ispresent(vector<string>&a,int i,int j)
{   
    // cout<<i<<" "<<j;
    int ind1= min(i+1,(int)a.size()-1);
    int ind2= min(j+1,(int)a[0].size()-1);
    int ind3=max(i-1,0);
    int ind4=max(j-1,0);
    if(i==0)
    {   
        if(j==0)
        {
            if(a[ind1][j]=='P' || a[i][ind2]=='P')
                return true;
        }
        else if(j>0 && j!=a[0].size()-1)
        {   
            if(a[ind1][j]=='P' || a[i][ind2]=='P' || a[i][ind4]=='P')
            {   
                // cout<<"haha";
                return true;
            }    
            
        }
        else if(j==a[0].size()-1)
        {
            if(a[ind1][j]=='P' || a[i][ind4]=='P')
                return true;
        }
        
    }
    else if(i>0 && i<a.size()-1)
    {
        if(j==0)
        {
            if(a[ind1][j]=='P' || a[i][ind2]=='P' || a[ind3][j]=='P' )
                return true;
        }
        else if(j>0 && j<a[0].size()-1)
        {
            if(a[ind1][j]=='P' || a[i][ind2]=='P' || a[i][ind4]=='P'|| a[ind3][j]=='P')
                return true;
        }
        else
        {
            if(a[ind1][j]=='P' || a[i][ind4]=='P' || a[ind3][j]=='P')
                return true;
        }
    }
    else
    {
        if(j==0)
        {
            if(a[ind3][j]=='P' || a[i][ind2]=='P')
                return true;
        }
        else if(j>0 && j<a[0].size()-1)
        {
            if(a[ind3][j]=='P' || a[i][ind2]=='P' || a[i][ind4]=='P')
                return true;
        }
        else
        {
            if(a[ind3][j]=='P' || a[i][ind4]=='P')
                return true;
        }
    }
    return false;
}
int main()
{    
    int n,m,count=0;
    cin>>n>>m;
    string s;
    vector<string>a;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        a.push_back(s);
    }      
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='W' && ispresent(a,i,j))
                count++;
        }
    }
    cout<<count;
    return 0;
}