/*
 * File:        https://vjudge.net/contest/669017#problem/E
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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(int i=0; i<n; i++)
        {
            int len;
            cin>>len;
            string s;
            cin>>s;
            for(auto ch : s)
            {
                if(ch == 'D')
                {
                    if(v[i] == 9)
                    {
                        v[i] = 0;
                    }
                    else
                    {
                        v[i]++;
                    }
                }
                else
                {
                     if(v[i] == 0)
                     {
                         v[i] = 9;
                     }
                     else
                     {
                         v[i]--;
                     }
                }
            }
        }

        for(auto val: v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}



