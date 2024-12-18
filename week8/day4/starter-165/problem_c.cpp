#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        multiset<int> s;

        for (int i = 0; i < n; i++) {
            int a_i;
            cin >> a_i;
            s.insert(a_i);
        }

        int cnt = 0;
        long long int ans = 0;
        for (auto val : s) {
            int current_val = val - cnt;
            if(current_val >= 0)
            {
                ans = ans + (val - cnt);
            }
            cnt++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
