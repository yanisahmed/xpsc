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
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }


    sort(v.begin(), v.end(), greater<long long>());

    long long ans = 0;
    for(int i = 0; i<n-1; i++)
    {
        ans = v[i] * v[i+1];
        if(ans % 2 == 0)
        {
            cout<<ans<<endl;
            return 0;
        }
    }
    cout<<ans<<endl;

    return 0;
}
