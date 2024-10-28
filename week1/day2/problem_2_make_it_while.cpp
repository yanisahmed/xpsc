/*
 * File:        Make it white
 * Author:      Yanis Ahmed
 * Version:     1.0
 * Date:        2024-10- 6
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
        string s;
        cin>>s;

        int spos = 0;
        int epos = n - 1;

        while(n > 0)
        {
           if(s[spos] == 'B')
           {
               break;
           }
           spos++;
        }

        while(n > 0)
        {
           if(s[epos] == 'B')
           {
               break;
           }
           epos--;
        }
        //cout<<spos<<" "<<epos<<endl;
        cout<<epos - spos + 1 <<endl;

    }


    return 0;
}


