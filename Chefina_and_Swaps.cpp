//Chefina and Swaps(JULY 20B codechef),Problem Code: CHFNSWPS :-https://www.codechef.com/JULY20B/problems/CHFNSWPS

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n;
    cin>>t;
    while(t--)
    {  
        cin>>n;
        map<long long,long long > m;
        long long x1,mn1=LLONG_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>x1;
            mn1=min(x1,mn1);
            m[x1]++;
        }
        for(int i=0;i<n;i++)
        {
            cin>>x1;
            mn1=min(x1,mn1);
            m[x1]--;
            if(m[x1]==0)
            m.erase(x1);
        }
        if(m.empty())
        cout<<"0\n";
        else
        {
          map<long long,long long> m1,m2;
          long long c1=0;
        for(auto &x:m)
        {
            if((x.second>0) && (!(x.second&1)))
            {
                c1+=x.second;
                 m1.insert({x.first,x.second});
            }
            else if((x.second<0 )&& (!(x.second&1)))
            {
                c1+=x.second;
                 m2.insert({x.first,(-1)*x.second});
            }
            else
            {
                c1=-1;
                break;
            }
        }
        if(c1!=0)
        cout<<-1<<'\n';
        else
        {
            long long ans=0;
            map<long long, long long>::iterator it1;
            auto it2=m2.rbegin();
           for(it1=m1.begin();it1!=m1.end() && it2!=m2.rend();)
           {
               if(it1->second<it2->second)
               {
                   ans+=min(min(it1->first,it2->first)*(it1->second/2),mn1*it1->second);
                   it2->second=(it2->second)-(it1->second);
                   it1++;
               }
               else if(it1->second>it2->second)
               {
                   ans+=min(min(it1->first,it2->first)*(it2->second/2),mn1*it2->second);
                   it1->second=(it1->second)-(it2->second);
                   it2++;
               }
               else
               {
                   ans+=min(min(it1->first,it2->first)*(it1->second/2),mn1*it1->second);
                   it1++;
                   it2++;
               }
                   
           }
           cout<<ans<<'\n';
        }
      }
    }
}
