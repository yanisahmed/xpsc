
/*
 * File:        https://vjudge.net/contest/666748#problem/C
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2024-11-07
 * Description: Brief description of what the program does.
 * Note:        Any additional notes or comments about the program.
 */
#include<bits/stdc++.h>
#include <ios>  // Include for std::ios
using namespace std;


int main()
{
    // Fast I/O setup
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<long long, int> cnt;
        for (int i = 0; i < n; i++)
        {
            cnt[a[i]]++; // Count occurrences of each element in `a`
            // cnt[a[i]] = cnt[a[i]] + 1;
        }

        // Printing the map
        for (auto it = cnt.begin(); it != cnt.end(); ++it)
        {
            cout << it->first << " " << it->second << endl;
        }

    }

    return 0;
}


