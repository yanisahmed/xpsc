
/*
 * File:        Indian Summer
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2024-10- 28
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

    vector<pair<string,string>>v;

    int n;
    cin>>n;
    while(n--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(v.empty())
        {
            v.push_back({s1,s2});
        }
        else
        {
            int flag = 0;
            for(auto s:v)
            {
                if(s.first == s1 && s.second == s2)
                {
                    flag = 1;
                }
            }
            if(flag != 1)
            {
                v.push_back({s1,s2});
            }
        }


    }

    cout<<v.size()<<endl;


    return 0;
}


