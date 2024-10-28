/*
 * File:        filename.cpp
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2024-06-14
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

    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        //cin>>v[i];
    }

    // sort(v.rbegin(), v.rend());
//    for(int i=0; i<n; i++)
//    {
//        cout<<v[i];
//    }
    int s = 0;
    int d = 0;
    int st = 0;
    int en = n-1;
    int flag = 1;
    while(st <= en)
    {
        if(flag)
        {
            int mx;
            if(v[st] >= v[en])
            {
                mx = v[st];
                st++;
            }
            else
            {
                mx = v[en];
                en--;
            }
            s += mx;
            flag = 0;
        }
        else
        {
            int mx;
            if(v[st] >= v[en])
            {
                mx = v[st];
                st++;
            }
            else
            {
                mx = v[en];
                en--;
            }
            d += mx;
            flag = 1;
        }
    }


    cout<<s<< " "<<d<<endl;
    return 0;
}


