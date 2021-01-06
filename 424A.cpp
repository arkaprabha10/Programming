#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n,l1=0,l2=0,count=0;
    string a;
    cin>>n>>a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='x')
            l1++;
        else
        {
            l2++;
        }
    }
    if(l1>l2)
    {
        int j=0;
        while(count<abs(n/2-l2) && j<a.size())
        {
            if(a[j]=='x')
            {
                a[j]=toupper(a[j]);
                count++;
            }
            j++;
        }
    }
    else
    {
        int j=0;
        while(count<abs(n/2-l1) && j<a.size())
        {
            if(a[j]=='X')
            {
                a[j]=tolower(a[j]);
                count++;
            }
            j++;
        }
    }
cout<<abs(n/2-l2)<<endl<<a;    
return 0; 
}

