/*
 * File:        https://vjudge.net/contest/669017#problem/A
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2024-11-27
 * Description: Brief description of what the program does.
 * Note:        Any additional notes or comments about the program.
 */
#include<bits/stdc++.h>
using namespace std;


int main()
{
    // Fast I/O setup
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,x;
    cin>>n>>x;
    //multiset<int>ml;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a != x) v.push_back(a);
    }

    /*
    while(find(v.begin(), v.end(), x) != v.end())
    {
        auto it = find(v.begin(), v.end(), x);
        v.erase(it);
    }
    */

    for(auto val: v)
    {
        cout<<val<<" ";
    }

    return 0;
}


