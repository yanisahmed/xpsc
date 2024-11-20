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

    int a,b;
    cin>>a>>b;
    int ans = 0;
    for(int i=1; i<=2; i++)
    {
        if(a >= b)
        {
            ans = ans + a;
            a--;
        }
        else
        {
            ans = ans + b;
            b--;
        }
    }
    cout<<ans<<endl;

    return 0;
}


