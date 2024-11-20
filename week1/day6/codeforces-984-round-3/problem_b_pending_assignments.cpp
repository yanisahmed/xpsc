
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
        int x,y,z;
        cin>>x>>y>>z;
        float mins = x * y;
        int days = ceil(mins / 1440);
        cout<<days<<endl;
        if(days <= z) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}



