
/*
 * File:        Problem a Quintomania
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2024-11- 2
 * Description: Brief description of what the program does.
 * Note:        Any additional notes or comments about the program.
 */
#include<bits/stdc++.h>
#include <ios>  // Include for std::ios
using namespace std;

bool sortDesc(const pair<int, int>&a, const pair<int, int>&b)
{
    if(a.second != b.second)
    {
        return a.second > b.second;
    }

    return a.first > b.first;
}

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
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>v;
        for(int i = 0; i<k; i++)
        {
            int ki, kc;
            cin>>ki>>kc;
            v.push_back({ki, kc});
        }
        sort(v.begin(), v.end(), sortDesc);
        long long ans = 0;
        int limit = min(n,k);

        for(int i=0; i<limit; i++)
        {
            ans += v[i].second;
        }
        cout<<ans<<endl;
    }
    return 0;
}



