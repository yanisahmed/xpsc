#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        long long X;
        cin >> N >> X;

        vector<long long> H(N);
        for (int i = 0; i < N; i++) {
            cin >> H[i];
        }

        sort(H.rbegin(), H.rend());

        long long sum = 0, ans = H[0];

        for(int i=1; i<N; i++)
        {
            sum += X;
            long long curr = a[i] + sum;
            ans = max(ans, curr);
        }

        cout<<ans<<endl;
    }

    return 0;
}
