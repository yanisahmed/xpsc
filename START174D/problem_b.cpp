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
       string s;
       cin>>n>>s;
       sort(s.begin(),s.end());
       if(s[0]=='z' && s[n-1]=='z')
       {
           cout<<-1<<endl;
          continue;
       }

       for(int i = 0;i<n;i++)cout<<'z';
       cout<<endl;
    }
}
