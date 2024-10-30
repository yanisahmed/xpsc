#include<bits/stdc++.h>
#include <ios>  // Include for std::ios
using namespace std;

int main()
{
    // Fast I/O setup
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int>v = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
    vector<int>v2 = {2, 6, 14, 30, 62, 126, 254, 510, 1022, 2046};

    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;

        int left = n - x;
        if (left < 0)
        {
            cout << v[n-1] << endl;
        }
        else if (n == x)
        {
            cout << v2[n-1] << endl;
        }
        else
        {
            if (left == 0)
                cout << v[n-1] << endl;
            else
                cout << v[n-1] - v2[left-1] << endl;
        }
    }
    return 0;
}
