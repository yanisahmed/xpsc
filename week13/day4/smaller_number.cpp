#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin>>n>>m;
    vector<int>v1(n), v2(m), ans;
    for(int i = 0; i<n; i++)
        cin>>v1[i];
    for(int i=0; i<m; i++)
        cin>>v2[i];

    int l=0; int r = 0;
    int cnt = 0;
    while(r < m)
    {
        if(l<n && v1[l] < v2[r]) {
            cnt++;
            l++;
        }
        else
        {
           ans.push_back(cnt);
           r++;
        }
    }

    for(int val:ans)
        cout<<val<<" ";
}

