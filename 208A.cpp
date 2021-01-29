#include<iostream>
#include<string>
#include<cmath>
#include<unordered_map>
#include<unordered_set>
#include<bits/stdc++.h>
 
using namespace std;

int main()
{    string s,ans="";
    cin>>s;
    int i=0,counter=0;
    // cout<<i;
     if(s.size()>=3)
     {
     while(i<s.size()-2)
     {
         if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
         {
            i+=3;
            counter++;
     
         }   
        else
         {  
             if(counter>=1)
                ans+=" ";
             ans+=s[i];
             i++;
             counter=0;
         }
         //cout<<i;
     }
     }
    //  cout<<"haha";
     if(i<s.size())
     {  //cout<<i;
         if(counter>=1)
            ans+=" ";
         while(i<s.size())
         {
             ans+=s[i];
             i++;
         }
     }
     i=0;
     while(ans[i]==' ')
        i++;
    // cout<<ans;
    string final1="";
    for(int j=i;j<ans.size();j++)
        final1+=ans[j];
     cout<<final1;
    return 0;  
}