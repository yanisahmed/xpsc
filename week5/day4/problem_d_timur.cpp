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
        string s;
        int flag = 0;
        int caps = 0;
        int len = s.length();
        if(len == 5)
        {
            for(int i=0; i<len; i++)
            {
                if(s[i] == 'T' || s[i]=='m' || s[i]=='i' || s[i]=='u' || s[i] == 'r')
                {
                    if(s[i] >= 'A' && s[i]<= 'Z') caps ++;
                    if(s[i] == 'T')
                    {
                        flag = 1;
                    }
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }

        if(flag && caps == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}



