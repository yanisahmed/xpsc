#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int a[n+5],f = 0,z = 0;
       map<int,int>mp;
       set<int>st;
       for(int i = 0;i<n;i++)
       {
           cin>>a[i];
           mp[a[i]]++;
       }
       int ans = 0;
       for(auto i : mp)
       {
         if(i.first)
         {
             if(i.second%2)
             {
                 st.insert(i.first);
               if(i.second>1)  st.insert(0);
             }
             else st.insert(0);
         }
         else st.insert(i.first);
       }
      // cout<<f<<' '<<z<<endl;
       cout<<st.size()<<endl;
    }
}
