
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,m;
        string s;
        cin>>m>>k>>s;
        int swis = 0;
        for(auto i : s)if(i=='S')swis++;
        if(swis>=k)cout<<m<<endl;
        else cout<<m+(k-swis)-1<<endl;
    }
    return 0;
}
