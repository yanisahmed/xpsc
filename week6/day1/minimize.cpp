#include <bits/stdc++.h>
#define fastread() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        if (n == 3) {
            cout << 0 << endl;
            continue;
        }


        int range1 = a[n-1] - a[2];
        int range2 = a[n-3] - a[0];
        int range3 = a[n-2] - a[1];

        cout << min({range1, range2, range3}) << endl;
    }
}

int main() {
    fastread();
    solve();
    return 0;
}

