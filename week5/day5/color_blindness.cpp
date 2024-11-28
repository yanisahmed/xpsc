#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int len;
        cin>>len;
        string s1,s2;
        cin>>s1>>s2;

        int flag = 1;
        int st = 0;
        while(st <len)
        {
            char ch = s1[st];
            if(ch == 'G' || ch == 'B')
            {
                char s2_ch = s2[st];
                if( s2_ch == 'G' || s2_ch == 'B')
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                char s2_ch = s2[st];
                if(s2_ch == 'R')
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
            st++;
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}
