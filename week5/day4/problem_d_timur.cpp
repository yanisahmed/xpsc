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
        int n;
        cin>>n;
        map<char, int>mp;
        string s;
        cin>>s;

        for(char ch: s)
        {
            mp[ch]++;
        }
        int flag = 0;

        for(const auto& pairs: mp)
        {
            if(pairs.first == 'T' && pairs.second == 1 || pairs.first == 'i' && pairs.second == 1 || pairs.first == 'r' && pairs.second == 1 || pairs.first == 'u' && pairs.second == 1 || pairs.first == 'm' && pairs.second == 1)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }

        if(flag && n==5) cout<<"Yes"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}



