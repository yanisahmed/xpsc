#include <bits/stdc++.h>
#define int long long
#define ll long long
#define pii pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define cyes cout << "Yes" << endl
#define cno cout << "No" << endl
#define minus cout << -1 << endl
#define fastread()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
const int mod = 1e9 + 7;

void solve()
{
    int n;
    long long k;
    cin >> n >> k;

    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int l = 0, r = 0, ans = 0;
    long long sum = 0;
    while(r<n)
    {
        sum += a[r];
        if(sum <= k)
        {
            ans = max(ans, r - l + 1);

        }
        else
        {
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    fastread();
    solve();

    return 0;
}
