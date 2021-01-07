#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
    long int n;
    cin>>n;
    vector<string>ans;
    if(n==0)
    {
        ans.push_back("O-|-OOOO");
    }
    else
    {   
        while(n>0)
        {   int x= n%10;
            n/=10;
            string temp="";
            if(x>=5)
            {   
                temp+="-O|";
                x-=5;
            }    
            else
                temp+="O-|";
            ;

            int y=x;

            while(x>0)
            {
                temp+="O";
                x--;
            }

            temp+="-";
            
            for(int i=0;i<4-y;i++)
                temp+="O";
            
            ans.push_back(temp);
        }    
    }
    
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<endl;

return 0; 
}

