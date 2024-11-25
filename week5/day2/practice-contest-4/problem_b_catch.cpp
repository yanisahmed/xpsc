#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
            int n, x, y;
            cin>>n>>x>>y;
            vector<int>v(n);
            for(int i=0; i<n; i++)
            {
                cin>>v[i];
            }
            int ans = 0;
            for(int i=0; i<n; i++)
            {
               if(x * v[i] < y)
               {
                   ans += x * v[i];
               }
               else
               {
                   ans += y;
               }
            }

            cout<<ans<<endl;
    }
    return 0;
}
