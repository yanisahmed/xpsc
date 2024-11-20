
/*
 * File:        https://vjudge.net/contest/671238#problem/A
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2024-11-11
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
        int n, x, y;
        cin>>n>>x>>y;

       vector<int>ans1;
       vector<int>ans2;
       for(int i=1; i<=n; i++)
       {
           ans1.push_back(i*x);
       }

       for(int i=2; i<=n; i=i+2)
       {
           ans2.push_back((i*y)/2);
       }

       for(int i=0; i<ans1.size(); i++)
       {
           cout<<ans1[i]<<" ";
       }
       cout<<endl;
       for(int i=0; i<ans2.size(); i++)
       {
           cout<<ans2[i]<<" ";
       }
       cout<<endl;
    }


    return 0;
}


