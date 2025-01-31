#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,m;
        string s;
        vector<string> patterns = {"RGB", "RBG", "GRB", "GBR", "BRG", "BGR"};
        cin>>m>>s;
        int ans = INT_MAX;
        for(auto it : patterns)
        {
            int cnt = 0;
            for(int i = 0;i<m;i++)
            {
                if(it[i%3]!=s[i])cnt++;
            }
            ans = min(cnt,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}
