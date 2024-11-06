
/*
 * File:        https://www.codechef.com/START159D/problems/USELEC
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2024-11-06
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
        vector<int>a,b;
        int n, x;
        cin>>n>>x;
        int a_win = 0;
        int b_win = 0;
        for(int i=0; i<n; i++)
        {
            int p;
            cin>>p;
            a.push_back(p);
        }

        for(int i=0; i<n; i++)
        {
            int p;
            cin>>p;
            b.push_back(p);
            (a[i] > b[i]) ? a_win++ : b_win++ ;
        }

        //cout<<a_win <<" "<<b_win<<endl;
        for(int i=0; i<n; i++)
        {
            if(a_win < b_win)
            {
                if(a[i] < b[i])
                {
                    int dif = b[i] - a[i];
                    dif = dif + 1;
                    if(dif <= x)
                    {
                        a[i] += dif;
                        x = x -dif;
                    }
                    //cout<<"dif:"<<dif<<" "<<"x:"<<x<<" "<<"a[i]:"<<a[i]<<" "<<"b[i]:"<<b[i]<<endl;
                    if( a[i] > b[i] )
                    {
                        a_win++;
                        b_win--;
                    }
                    else if(a[i] == b[i])
                    {
                        a_win++;
                    }

                }
                else if(a[i] == b[i])
                {
                    if(x > 0)
                    {
                        a[i] = a[i] + 1;
                        x--;
                        a_win ++;
                        b_win--;
                    }

                }
            }
        }
        //cout<<a_win << " "<<b_win<<endl;
        (a_win > b_win) ? cout<<"YES"<<endl : cout<<"NO"<<endl;

    }

    return 0;
}


