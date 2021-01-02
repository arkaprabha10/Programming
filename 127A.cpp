#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
 long double a,b,c,d,ans=0;
 long double n,k;
cin>>n>>k;

cin>>a>>b;
for(int i=1;i<n;i++)
{
    cin>>c>>d;
    ans+=sqrt(pow((c-a),2)+ pow((d-b),2));
    a=c;
    b=d;
}
ans=ans*k/50;
cout.precision(10);
cout<<ans;
return 0;
}

