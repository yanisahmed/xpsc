/*
 * File:        https://codeforces.com/problemset/problem/1791/C
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2024-11-26
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
    int x, y, z;
    cin>>x>>y>>z;

    int total_played = x + y + z;

    if(total_played == 4)
    {
        float pointsA = x + (y ? y * 0.5 : 0);
        float pointsB = z + (y ? y * 0.5 : 0);
        if(pointsA > pointsB) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }else
    {
        float pointsA = x + (y ? y * 0.5 : 0);
        float pointsB = z + (y ? y * 0.5 : 0);
        pointsA += (4 - total_played);
        if(pointsA > pointsB) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}


