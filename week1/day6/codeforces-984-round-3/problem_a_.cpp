
/*
 * File:        Problem a Quintomania
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2024-11- 2
 * Description: Brief description of what the program does.
 * Note:        Any additional notes or comments about the program.
 */
#include<bits/stdc++.h>
#include <ios>  // Include for std::ios
using namespace std;

int check_dif(int a, int b)
{
    return (a > b) ? a - b : b - a;
}

int main()
{
    // Fast I/O setup
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;
    vector<int>v;
    while(t--)
    {
        int n;
        cin>>n;
        v.clear();
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        int flag = 1;

        for(int i = 0; i<n-1; i++)
        {
            int dif = check_dif(v[i], v[i+1]);
            //cout<<dif<<endl;

            if(dif == 5 || dif ==7)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}


