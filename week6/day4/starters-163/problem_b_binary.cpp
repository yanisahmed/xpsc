#include <bits/stdc++.h>
#define fastread() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;


        int min_ones = (n + 1) / 2;
        int max_ones = n / 2;

        if (k >= max_ones && k <= min_ones) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    fastread();
    solve();
    return 0;
}
