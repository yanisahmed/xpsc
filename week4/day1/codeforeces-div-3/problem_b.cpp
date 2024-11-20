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

        int rem = n - 2;
        vector<int>ans(2);
        for(auto x : freq_arr)
        {
                if (rem % x.first == 0)
                {
                   ans.push_back(x.first);
                }
        }

        for(auto val : ans)
            cout<<val<<endl;
//        int cnt = 0;
//
//        for(auto x : freq_arr)
//        {
//           cout<<x.first<<" "<<x.second<<endl;
//        }



    }

    return 0;
}
