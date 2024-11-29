#include <bits/stdc++.h>
using namespace std;

void solve(int tc) {
    int n,m;
    cin>>n>>m;
    string s, t;
    cin>>s>>t;

    if(s == t)
    {
        cout<<"Yes"<<endl;
        return;
    }

    int s_a = 0;
    int t_a = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'a') s_a++;
    }

    for(int i=0; i<m; i++)
    {
        if(t[i] == 'a') t_a++;
    }

    if(s_a != t_a)
    {
        cout<<"No"<<endl;
        return;
    }

    int s_b;
    int t_b;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'a')
            break;
        s_b++;
    }

    for(int i=0; i<m; i++)
    {
        if(t[i] == 'a')
            break;
        t_b++;
    }

    if(s_b != t_b)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
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
