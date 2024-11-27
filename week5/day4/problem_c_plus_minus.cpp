/*
 * File:        https://vjudge.net/contest/669017#problem/C
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
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if(a+b == c) cout<< "+"<<endl;
        else cout<<"-"<<endl;
    }

    return 0;
}



