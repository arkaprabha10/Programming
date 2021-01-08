#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
    string a,b;
    cin>>a>>b;
    int i=0,j=0,count=1;
    while(i<a.size() && j<b.size())
    {
        if(a[i]==b[j])
        {
            i++;
            count++;
        }    
        j++;
    }
    cout<<count;
return 0; 
}

