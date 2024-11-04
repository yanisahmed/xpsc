

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
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int chef_win = 0;
        int chefina_win = 0;
        int total_draw = 0;
        for(int i=0; i<n; i++)
        {
           if( s1[i] == 'R' && s2[i] == 'S' || s1[i] == 'S' && s2[i] == 'P' || s1[i] == 'P' && s2[i] == 'R')
           {
               chef_win++;
           }
           else if( s1[i] == 'R' && s2[i] == 'R' || s1[i] == 'S' && s2[i] == 'S' || s1[i] == 'P' && s2[i] == 'P')
           {
               total_draw++;
           }
           else
           {
               chefina_win++;
           }
        }

        if(chef_win > chefina_win) cout<<"0"<<endl;
        else if(chef_win == chefina_win) cout<<"1"<<endl;
        else cout<<chefina_win - chef_win<<endl;


    }

    return 0;
}



