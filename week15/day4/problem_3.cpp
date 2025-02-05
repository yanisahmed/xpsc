#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        map<int, int> m;
        int len = 1, maxLen = 1;

        for (int i = 0; i < n - 1; i++) {
            if (v[i] <= v[i + 1]) {
                len++;
            } else {
                int tmp = v[i + 1] * x;
                if (tmp >= v[i]) {
                    v[i + 1] = tmp;
                    len++;
                } else {
                    len = 1;
                }
            }
            maxLen = max(maxLen, len);
            m[i] = maxLen;
        }

        cout << maxLen << endl;
    }
}
