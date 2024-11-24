
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int a, b, t;
   cin>>a>>b>>t;

   int ans = t / a;
   cout<<ans * b<<endl;
   return 0;
}
