#include <bits/stdc++.h>
#define fastread() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string>vec;
        while(n--)
        {
            string s;
            cin>>s;
            vec.push_back(s);
        }

        int cnt = 0;
        int total_size = 0;
        for(auto val : vec)
        {
            total_size += val.length();
            if(total_size <= m) cnt++;
            else break;
        }
        cout<<cnt<<endl;
    }
}

int main() {
    fastread();
    solve();
    return 0;
}

