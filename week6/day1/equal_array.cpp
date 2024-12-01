
#include <bits/stdc++.h>
#define fastread() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcdOfList(const vector<int>&arr)
{
    int res = arr[0];
    for(int i=1; i<arr.size(); i++)
    {
        res = gcd(res, arr[i]);
        if(res == 1) break;
    }
    return res;
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int g = gcdOfList(v);

        bool found = false;
        for(int i=0; i<n; i++)
        {
            if( v[i] == g)
            {
                found = true;
                break;
            }
        }

        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main() {
    fastread();
    solve();
    return 0;
}

