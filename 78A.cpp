#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void func1(char * a)
{
    for(int i=0;i<200;i++)
    {
        if(isupper(a[i]))
            a[i]=tolower(a[i]);
    }
    return ;
}
int func(char *a)
{   int count =0;
    for(int i=0;i<200;i++)
    {   
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {   
            count++;
        }
        
    }
    return count;
}
int main()
{
   char a[200]={'\0'},b[200]={'\0'},c[200]={'\0'};
   int x=0,y=0,z=0;
   cin.getline(a,200);
   func1(a);
   x=func(a);
   cin.getline(b,200);
   func1(b);
   y=func(b);
   cin.getline(c,200);
    func1(c);
   z=func(c);
   if(x!=5 || y!=7 || z!=5)
   cout<<"NO";
   else
   cout<<"YES";
   return 0;
}