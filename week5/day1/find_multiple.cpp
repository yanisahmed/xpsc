
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int a, b, c;
    cin>>a>>b>>c;
    int flag = -1;
    int ans = 0;
    for(int i=1; i<=c; i++)
    {
        int ans = i * c;
        if(ans >= a && ans <= b)
        {
            cout<<ans<<endl;
            return 0;
        }
    }

   cout<<"-1"<<endl;
   return 0;
}
