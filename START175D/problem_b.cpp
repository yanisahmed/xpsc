#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        if(n%2 != 0) cout<<n/2<<endl;
        else
        {
            cout<<(n/2) + 1 <<endl;
        }
    }

    return 0;
}
