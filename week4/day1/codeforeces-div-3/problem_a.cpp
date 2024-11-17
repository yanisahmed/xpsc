#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Fast I/O setup
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }


        unordered_map<int, int> freq_arr;
        for (int num : arr)
        {
            freq_arr[num]++;
        }
        int cnt = 0;

        for(auto x : freq_arr)
        {
           if(x.second > 1) cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}
