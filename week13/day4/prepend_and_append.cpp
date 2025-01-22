#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int l = 0;
        int r = s.length()-1;

        int cnt = 0;
        while(l <= r)
        {
           if(s[l] != s[r]) cnt++;
            else break;
            l++;
           r--;
        }

        cout<<s.length() - cnt * 2<<endl;
    }
}
