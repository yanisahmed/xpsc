#include <bits/stdc++.h>
#define fastread() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n;
    cin >> n;

    list<string> lst;
    unordered_set<string> st;
    while (n--) {
        string s;
        cin >> s;

        if (st.find(s) != st.end()) {
            lst.remove(s);
        }

        lst.push_front(s);
        st.insert(s);
    }

    for (const auto& val : lst) {
        cout << val[val.length() - 2] << val[val.length() - 1];
    }
}

int main() {
    fastread();
    solve();
    return 0;
}
