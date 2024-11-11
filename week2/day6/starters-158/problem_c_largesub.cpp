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

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'a' && s[i+1] == 'b')
            {
                cnt1++;
            }
            if(s[i] == 'b' && s[i+1] == 'a')
            {
                cnt2++;
            }
        }

          if(cnt1 == cnt2)
            {
                cout<<n<<'\n';
            }
            else
            {
                int ans1 = n; int ans2 = n;
                char first = s[0];
                char last = s[n-1];
                for(int i=0; i<n; i++)
                {
                    if(s[i] != first)
                    {
                        break;
                    }
                    ans1--;
                }
                for(int i=n-1; i>=0; i--)
                {
                    if(s[i] != last)
                    {
                        break;
                    }
                    ans2--;
                }

                cout<<max(ans1, ans2)<<'\n';
            }
    }

    return 0;
}


