#include <bits/stdc++.h>
using namespace std;

void solve(int tc) {
   int n,k;
   string s;
   cin>>n>>k>>s;
   map<char,int>mp;
   for(int i = 0;i<s.size();i++)mp[s[i]]++;

   int cur = 0;
   for(auto i : mp)
   {
       if(i.second & 1)cur++;
   }
   if(cur)cur--;

   k-=cur;
   if(k>=0 || k%2==0 )cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int tc = 1; tc <= t; tc++) {
        solve(tc);
    }
}
