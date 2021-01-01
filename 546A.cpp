#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{   
long long int w,n,k,ans;
cin>>k>>n>>w;
ans=(k*w*(w+1)/2)-n;
if(ans<0)
    cout<<0;
else
    cout<<ans;
return 0;
}

