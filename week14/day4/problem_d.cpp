

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

        int red = 0, green=0, blue=0;
        for(int i=0; i<n;i++)
        {
            if(s[i]=='R')
            {
                red++;
            }
            else if(s[i]=='G')
            {
                 green++;
            }
            else if( s[i]=='B' )
            {
                 blue++;
            }
        }

        cout<<red<< " " << green << " " << blue;
    }
}
