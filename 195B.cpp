#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{   
   long int n,m,ind1,ind2;
   int count=0;
   cin>>n>>m;
   vector<int>ans(n,0);
    if(m%2!=0)
       {    if(m==1)
            {
                for(int i=0;i<n;i++)
                    cout<<1<<endl;
                return 0;
            }
           ind1=m/2-1;
           ind2=m/2+1;
           ans[0]=m/2+1;
           for(long int i=1;i<n;i++)
           {    if(count == 0 && ind1<0)
                {
                    ind1=m/2;
                    ans[i]=ind1+1;
                    ind1--;
                    i++;
                }    
                if(count==1 && ind2>=m)
                {
                    ind2=m/2+1;
                }
                    
               if(count==0 && i<n)
               {    count=1;
                   ans[i]=ind1+1;
                   ind1--;
               }
               else if(count==1 && i<n)
               {    count=0;
                   ans[i]=ind2+1;
                   ind2++;
               }
           }
       }
       else
       {
           ind1=m/2-1;
           ind2=m/2;
           ans[0]=ind1+1;
           ans[1]=ind2+1;
           ind1--;
           ind2++;
           for(long int i=2;i<n;i++)
           {    if(ind1<0)
                    ind1=m/2-1;
                if(ind2>=m)
                    ind2=m/2;
                if(i%2==0)
                {   ans[i]=ind1+1;
                    ind1--;
                }    
                else
                {
                    ans[i]=ind2+1;
                    ind2++;
                }
           }
    }

    for(int i=0;i<n;i++)
        cout<<ans[i]<<endl;
   
return 0; 
}

