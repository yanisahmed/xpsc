#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long int m, a, b, c;
        cin >> m >> a >> b >> c;

        long long int row_one_available = m, row_two_available = m;
        long long int ans = 0;

        ans += min(a, row_one_available);
        row_one_available -= min(a, row_one_available);

        ans += min(b, row_two_available);
        row_two_available -= min(b, row_two_available);

        ans += min(c, row_one_available);
        c -= min(c, row_one_available);

        ans += min(c, row_two_available);

        cout << ans << endl;
    }
    return 0;
}
