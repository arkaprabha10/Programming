#include<iostream>
#include<string>
#include<cmath>
#include<unordered_map>
#include<unordered_set>
#include<bits/stdc++.h>
 
using namespace std;
long long int func(string a)
{
    long long int ans=0;
    for(int i=0;i<a.size();i++)
        ans+=(a[i]-48)*pow(10,a.size()-1-i);
    return ans;
}
int main()
{   string a,b,c="",d="",x1="",x2="";
    long long int a2,b2,x;
    cin>>a2>>b2;
    x=a2+b2;
    x1=to_string(x);
    a=to_string(a2);
    b=to_string(b2);
    int counter=0;
    //cout<<to_string(123);
    //cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!='0')
            c+=a[i];
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]!='0')
            d+=b[i];
    }
    for(int i=0;i<x1.size();i++)
    {
        if(x1[i]!='0')
            x2+=x1[i];
    }
    long long int a1,b1,c1,d1,val;
    //a1=func(a);
    //b1=func(b);
    val=func(x2);
    c1=func(c);
    d1=func(d);
    //cout<<x2<<" "<<c1<<" "<<d1<<endl;
    if(val==c1+d1)
        cout<<"YES";
    else
        cout<<"NO"; 
    return 0;  
}