#include <bits/stdc++.h>
#define fastread() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;

        vector<int> v1(n), v2(n);
        map<int, int> m;

        for (int i = 0; i < n; i++) {
            cin >> v1[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> v2[i];
        }

        for (int i = 0; i < n; i++) {
            m[v1[i]] = v2[i];
        }

        vector<pair<int, int>> vec(m.begin(), m.end());


        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });


        long long sum = 0;
        int cnt = 0;
        for (auto& pair : vec) {
                cnt ++;
                sum += (long long) (pair.first) * pair.second;
                if(sum >= p) break;
        }

        if(sum >= p) cout<<cnt<<endl;
        else cout<<"-1"<<endl;
    }
}

int main() {
    fastread();
    solve();
    return 0;
}
