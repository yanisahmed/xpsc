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

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int l = 0;
        int r = n - 1;

        //cout<<"l :"<<l<<" r :" <<r<<endl;
        while(s[l] != s[r] && l < r)
        {
            l++;
            r--;
            n--;
            n--;
            //cout<<n<<endl;
        }

        cout<<n<<endl;
    }
    return 0;
}


