#include <bits/stdc++.h>
using namespace std;

int minOperations(int n, string s1, string s2, string s3) {
    int zero_count = 0, one_count = 0;

    for (int i = 0; i < n; i++) {
        zero_count += (s1[i] == '0') + (s2[i] == '0') + (s3[i] == '0');
        one_count += (s1[i] == '1') + (s2[i] == '1') + (s3[i] == '1');
    }

    if (zero_count % 3 == 0) return zero_count / 3;
    if (one_count % 3 == 0) return one_count / 3;

    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        cout << minOperations(n, s1, s2, s3) << "\n";
    }

    return 0;
}
