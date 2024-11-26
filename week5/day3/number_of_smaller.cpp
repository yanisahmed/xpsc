/*
 * File:        https://codeforces.com/problemset/problem/1791/C
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2024-11-26
 * Description: Brief description of what the program does.
 * Note:        Any additional notes or comments about the program.
 */
#include<bits/stdc++.h>
using namespace std;


int main()
{
    // Fast I/O setup
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

   int n, m;
   cin>>n>>m;
   vector<int>v1(n), ans;
   vector<int>v2(m);

   for(int i=0; i<n; i++)
   {
       cin>>v1[i];
   }
    for(int i=0; i<m; i++)
   {
       cin>>v2[i];
   }

   int l = 0, r = 0, cnt = 0;
   while(r < m)
   {
       if(l < n && v1[l] < v2[r])
       {
           cnt++;
           l++;
       }
       else
       {
           r++;
           ans.push_back(cnt);
       }
   }

   for(auto val: ans)
   {
       cout<<val<<" ";
   }
   cout<<endl;
    return 0;
}


