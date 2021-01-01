#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{   
    
    string a="";
    cin>>a;
    int count =1;
    char c=a[0];
    for(int i=1;i<a.size();i++)
    {
        if(a[i]==c)
            count++;
        else if(a[i]>c)
        {
            c=a[i];
            count=1;
        }
    }  
    for(int i=0;i<count;i++)
        cout<<c;
    return 0;
}