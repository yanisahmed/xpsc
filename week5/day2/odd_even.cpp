#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;



    vector<long long> v(n);
    long long res = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        res += v[i];
    }

    if(res % 2 == 0)
    {
        cout<<res<<endl;
        return 0;
    }

    sort(v.begin(), v.end());
    for(int i=0; i<n;i++)
    {
        long long ans = res - v[i];
        if(ans % 2 == 0)
        {
            cout<<ans<<endl;
            return 0;
        }
    }


    return 0;
}
