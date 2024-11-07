

/*
 * File:        https://vjudge.net/contest/666748#problem/A
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
    (a < b) ? cout<<b-a + 1<<endl : cout<<"0"<<endl;

    return 0;
}


